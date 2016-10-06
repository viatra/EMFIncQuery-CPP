
#ifndef _VIATRA_QUERY_DISTRIBUTED_QUERYSERVICE_H_
#define _VIATRA_QUERY_DISTRIBUTED_QUERYSERVICE_H_

#ifdef _VIATRA_HEADER_ONLY_
#define VIATRA_FUNCTION inline
#else
#define VIATRA_FUNCTION
#endif
#define VIATRA_INLINE_FUNCTION inline

#include<memory>
#include<unordered_set>
#include<mutex>
#include<map>
#include<future>
#include<unordered_set>

#include"../Model/IModelElemService.h"


#include"QueryRunner.h"
#include"QueryServer.h"
#include"QueryClient.h"
#include"IDGenerator.h"

namespace Viatra {
	namespace Query {
		namespace Distributed {

			struct NodeInfo {
				std::string name;
				std::string ip;
				uint16_t port;
			};

			// Type independent baseclass for QueryService
			class QueryServiceBase
			{
			public:
				QueryServiceBase(const char *configJSON, const char * nodeName);
				~QueryServiceBase();
			protected:

				std::map<std::string, NodeInfo> nodes;

				std::string nodeName;
				std::unique_ptr<QueryServer> server;

				std::map<std::string, std::unique_ptr<QueryClient>> clients;

				IDGenerator querySessionIDGenerator;
				std::map< uint64_t , std::unique_ptr<QueryRunnerBase> > queryRunners;
				
			};

			template<typename ModelRoot, template<typename> class QueryRunnerFactoryTemplate>
			class QueryService : public QueryServiceBase
			{
			private:
				ModelRoot modelRoot;
			public:
				using QueryRunnerFactory = QueryRunnerFactoryTemplate<ModelRoot>;

				// Helper type functions for a Query Class
				template<typename Query> using MatchOf = typename Query::Match;
				template<typename Query> using MatcherOf = typename Query::Matcher;
				
				VIATRA_FUNCTION QueryService(const char *configJSON, const char *nodeName)
					: QueryServiceBase(configJSON, nodeName)
					, modelRoot(configJSON, nodeName)
				{

				}
				VIATRA_FUNCTION ~QueryService()
				{

				}

				// usage: queryService.RunNewQuery<QueryName>()
				template<  template<typename>class QueryTemplate  ,  class Query = QueryTemplate<ModelRoot>  >
				std::unordered_set<typename Query::Match> RunNewQuery()
				{
					int64_t sessionID = querySessionIDGenerator.generate();
					queryRunners[sessionID] = QueryRunnerFactory::Create(Query::queryID, sessionID, &modelRoot);
					throw "Not implemented";
				}
				/*
				template<typename QuerySpec>
				std::future<std::unordered_set<MatchT<QuerySpec>>> DistributeToNodes(

				);**/

				void run() {};

				std::thread run_async() {
					std::thread t(
							[this]() {
								this->run();
					});
					return std::move(t);
				}

			};
		}
	}
}

#ifdef _VIATRA_HEADER_ONLY_
#include"QueryService.cpp"
#endif

#endif
