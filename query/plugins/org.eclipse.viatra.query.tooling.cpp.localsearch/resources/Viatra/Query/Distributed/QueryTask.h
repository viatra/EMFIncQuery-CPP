
#ifndef _VIATRA_QUERY_DISTRIBUTED_QUERYTASK_6645w436H__
#define _VIATRA_QUERY_DISTRIBUTED_QUERYTASK_6645w436H__

#include"TaskID.h"
#include<mutex>

namespace Viatra {
	namespace Query {
		namespace Distributed {

			struct QueryTaskBase {
				virtual TaskID createRemoteSubtask() = 0;
				virtual ~QueryTaskBase() {}
			};

			template<typename RootedQuery>
			class QueryResultCollector;

			/**
			* @brief Class for storing a basic task for query processing, ie. continuing a 
			* query of a pattern body from a given operation
			*
			* THREAD SAFETY: Threadsafe, immutable object
			*/
			template<typename RootedQuery>
			struct QueryTask : public QueryTaskBase {
				using Lock = std::unique_lock<std::mutex>;
				std::mutex mutex;
				
				// Unique Id for the task of a QuerySession
				TaskID id;
				TaskID nextSubtaskID;

				// Index of the body to run on
				int bodyIndex;	
				// Index of the operation to be continued
				int operationIndex;
				// The matching frame encoded in a string
				std::string encodedFrameVector;
				// The result collector for the matches
				std::weak_ptr<QueryResultCollector<RootedQuery>> collector;
				
				QueryTask(	TaskID taskID,
							std::string encodedFrameVector,
							int bodyIndex,
							int operationIndex,
							std::weak_ptr<QueryResultCollector<RootedQuery>> collector)
					: bodyIndex(bodyIndex)
					, operationIndex(operationIndex)
					, encodedFrameVector(encodedFrameVector)
					, collector(collector)
					, id(taskID)
					, nextSubtaskID(taskID)
				{
					nextSubtaskID.addSubID(0);
				}

				~QueryTask()
				{}

				// Threadsafe subtask creation
				TaskID createRemoteSubtask()override
				{
					Lock lck(mutex);
					nextSubtaskID.step(1);
					
					if (auto sptr = collector.lock())
						sptr->addRemoteRunningTask(nextSubtaskID);
					else
						throw std::logic_error("QueryTask::createRemoteSubtask -- WARNING - invalidated weak pointer dereference");
					return nextSubtaskID;
				}

				QueryTask() = delete;
				QueryTask(const QueryTask&) = delete;
				QueryTask(QueryTask && other)
					: bodyIndex(std::move(other.bodyIndex))
					, operationIndex(std::move(other.operationIndex))
					, encodedFrameVector(std::move(other.encodedFrameVector))
					, collector(std::move(other.collector))
					, id(std::move(other.id))
					, nextSubtaskID(std::move(other.nextSubtaskID))
				{}

			};
		}
	}
}



#endif