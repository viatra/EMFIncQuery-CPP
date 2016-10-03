#ifndef VIATRA__QUERY__DERIVED_FEATURES__NEAR_BY_TEST_MATCHER_H_
#define VIATRA__QUERY__DERIVED_FEATURES__NEAR_BY_TEST_MATCHER_H_

#include <unordered_set>
		
#include "Viatra/Query/DerivedFeatures/NearByTestFrame_0.h"
#include "Viatra/Query/DerivedFeatures/NearByTestMatch.h"
#include "Viatra/Query/DerivedFeatures/NearByTestQuerySpecification.h"
#include "Viatra/Query/Plan/SearchPlanExecutor.h"
#include "Viatra/Query/QueryEngine.h"

namespace Viatra {
namespace Query {
namespace DerivedFeatures {

template<class ModelRoot>
class NearByTestMatcher {
public:
	NearByTestMatcher(const ModelRoot* model, const ::Viatra::Query::Matcher::ISearchContext* context) 
		: _model(model), _context(context) {
	}
	std::unordered_set<NearByTestMatch> matches() const {
					using ::Viatra::Query::Matcher::ISearchContext;
		using ::Viatra::Query::Plan::SearchPlan;
		using ::Viatra::Query::Plan::SearchPlanExecutor;
		using ::Viatra::Query::Matcher::ClassHelper;
	
		std::unordered_set<NearByTestMatch> matches;
	
		{
			auto sp = NearByTestQuerySpecification<ModelRoot>::get_plan_unbound__0(_model);
			auto exec = SearchPlanExecutor<NearByTestFrame_0>(sp, *_context);
			
			
			for (auto&& frame : exec) {
				NearByTestMatch match;
			
				match.robot = static_cast<::RailRoadModel::IRobotPart*>(frame._0);
				match.train = static_cast<::RailRoadModel::ITrain*>(frame._1);
			
				matches.insert(match);
			}
		}
		
	
		return matches;
	}
	
private:
	const ModelRoot* _model;
	const ::Viatra::Query::Matcher::ISearchContext* _context;
};

} /* namespace DerivedFeatures */
} /* namespace Query */
} /* namespace Viatra */


#endif /*  VIATRA__QUERY__DERIVED_FEATURES__NEAR_BY_TEST_MATCHER_H_ */
