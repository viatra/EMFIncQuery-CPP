
#ifndef _VIATRA_QUERY_DISTRIBUTED_QUERY_RUNNER_DEF_H_8565652668
#define _VIATRA_QUERY_DISTRIBUTED_QUERY_RUNNER_DEF_H_8565652668

#include"QueryTask.h"
#include"Request.h"
#include"../Util/ConcurrentQueue.h"
#include"../Util/HierarchicalID.h"
#include"../Util/Logger.h"

#include<memory>
#include<atomic>
#include<exception>

namespace Viatra {
	namespace Query {
		namespace Distributed {

			class QueryResultCollectorBase;

			template<typename>
			class QueryResultCollector;
			
			class QueryFutureBase;
			class QueryServiceBase;

			class QueryRunnerBase : public std::enable_shared_from_this<QueryRunnerBase> {
			protected:
				using Logger = Viatra::Query::Util::Logger;

				uint64_t sessionID;
				int queryID;
				std::atomic<bool> terminated = false;


				std::condition_variable readyCV;
				std::atomic<bool> _ready = false;
				std::unique_ptr<std::thread> runnerThread;

				using Lock = std::unique_lock<std::mutex>;
				std::mutex futureMutex;

			public:
				QueryRunnerBase(uint64_t sessionID, int queryID);
				virtual ~QueryRunnerBase();
				virtual void startLocalQueryServing() = 0;
				virtual void notifyCollectionDone() = 0;

				void terminate();
				void join();
				bool ready();
				virtual void addTask(TaskID taskID, int body, int operation, std::string frame, const Request& request) = 0;

			};

			template<typename RootedQuery>
			class QueryRunner : public QueryRunnerBase
			{
				using ModelRoot = typename RootedQuery::ModelRoot;
				using Match = typename RootedQuery::Match;
				using MatchSet = typename Match::MatchSet;
				using Matcher = typename RootedQuery::Matcher;
				using QueryGroup = typename RootedQuery::QueryGroup;

			private:
				Util::ConcurrentQueue<QueryTask<RootedQuery>> localTasks;

				std::vector<std::shared_ptr<QueryResultCollector<RootedQuery>>> topLevelCollectors;

				QueryServiceBase *queryService;
				Matcher matcher;
				ModelRoot * modelRoot;
				QueryTask<RootedQuery> *currentTask;

				void addStartTask(std::weak_ptr<QueryFutureBase> future, int body, std::string encodedFrameVector);

				// Run the QueryRunners main processing loop
				// runs on QueryRunner thread
				void run();

			public:
				// Distribues the query execution to all the other nodes from a given state
				// Runner Thread
				void PropagateFrameVector(int body, int operation, const std::string& encodedFrameVector);

				QueryRunner(uint64_t sessionID, ModelRoot * modelRoot, QueryServiceBase *queryService, int queryID);

				// add a remote incoming task to the query runner for process
				// Custom thread
				virtual void addTask(TaskID taskID, int body, int operation, std::string frame, const Request& request) override;
				
				virtual void notifyCollectionDone()override;

				// start global querying and returns a future to access the results of the query
				void startGlobalQuery(std::weak_ptr<QueryFutureBase> future, typename RootedQuery::BindInfo bindInfo);

				MatchSet getResultMatchSet();

				// starts local query serving
				void startLocalQueryServing() override;
			};

		}
	}
}

#endif 