#ifndef VIATRA__QUERY__SAFETYLOGIC__CURRENTLY_CONNECTED_MATCHER_H_
#define VIATRA__QUERY__SAFETYLOGIC__CURRENTLY_CONNECTED_MATCHER_H_

#include <unordered_set>
		
#include "Viatra/Query/Distributed/QueryRunner.h"
#include "Viatra/Query/Plan/DistSearchPlanExecutor.h"
#include "Viatra/Query/Plan/SearchPlanExecutor.h"
#include "Viatra/Query/QueryEngine.h"
#include "Viatra/Query/Safetylogic/CurrentlyConnectedFrame_0.h"
#include "Viatra/Query/Safetylogic/CurrentlyConnectedFrame_1.h"
#include "Viatra/Query/Safetylogic/CurrentlyConnectedFrame_2.h"
#include "Viatra/Query/Safetylogic/CurrentlyConnectedFrame_3.h"
#include "Viatra/Query/Safetylogic/CurrentlyConnectedFrame_4.h"
#include "Viatra/Query/Safetylogic/CurrentlyConnectedMatch.h"
#include "Viatra/Query/Safetylogic/CurrentlyConnectedQuerySpecification.h"

namespace Viatra {
namespace Query {
namespace Safetylogic {

template<typename>class RootedCurrentlyConnected;
		
template<class ModelRoot>
class CurrentlyConnectedMatcher {
	using QueryRunnerT = ::Viatra::Query::Distributed::QueryRunner<RootedCurrentlyConnected<ModelRoot>>;
public:
	CurrentlyConnectedMatcher(
	const ModelRoot* model, const ::Viatra::Query::Matcher::ISearchContext* context, QueryRunnerT * queryRunner) 
		: _model(model), _context(context), _queryRunner(queryRunner) {
	}
	std::unordered_set<CurrentlyConnectedMatch> matches() const {
					using ::Viatra::Query::Matcher::ISearchContext;
		using ::Viatra::Query::Plan::SearchPlan;
		using ::Viatra::Query::Plan::SearchPlanExecutor;
		using ::Viatra::Query::Matcher::ClassHelper;
	
		std::unordered_set<CurrentlyConnectedMatch> matches;
	
		{
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__0(_model);
			auto exec = SearchPlanExecutor<CurrentlyConnectedFrame_0>(sp, *_context);
			
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ITurnout*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				matches.insert(match);
			}
		}
		
		{
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__1(_model);
			auto exec = SearchPlanExecutor<CurrentlyConnectedFrame_1>(sp, *_context);
			
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ISegment*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				matches.insert(match);
			}
		}
		
		{
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__2(_model);
			auto exec = SearchPlanExecutor<CurrentlyConnectedFrame_2>(sp, *_context);
			
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ITurnout*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				matches.insert(match);
			}
		}
		
		{
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__3(_model);
			auto exec = SearchPlanExecutor<CurrentlyConnectedFrame_3>(sp, *_context);
			
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ITurnout*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				matches.insert(match);
			}
		}
		
		{
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__4(_model);
			auto exec = SearchPlanExecutor<CurrentlyConnectedFrame_4>(sp, *_context);
			
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ITurnout*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				matches.insert(match);
			}
		}
		
	
		return matches;
	}
		void continue_0(CurrentlyConnectedFrame_0& frame, int startOpIndex, CurrentlyConnectedMatchSet& results, std::map<int, CurrentlyConnectedFrame_0Vector>& subFrames) const {
			using ::Viatra::Query::Matcher::ISearchContext;
			using ::Viatra::Query::Plan::SearchPlan;
			using ::Viatra::Query::Plan::DistSearchPlanExecutor;
			using ::Viatra::Query::Matcher::ClassHelper;
		
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__0(_model, &subFrames);
			
			auto unprepared_exec = DistSearchPlanExecutor<CurrentlyConnectedFrame_0>(sp, *_context, 0, startOpIndex);	
			auto exec = unprepared_exec.prepare(frame);
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ITurnout*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				results.insert(match);
			}
		
		}
		
		void continue_1(CurrentlyConnectedFrame_1& frame, int startOpIndex, CurrentlyConnectedMatchSet& results, std::map<int, CurrentlyConnectedFrame_1Vector>& subFrames) const {
			using ::Viatra::Query::Matcher::ISearchContext;
			using ::Viatra::Query::Plan::SearchPlan;
			using ::Viatra::Query::Plan::DistSearchPlanExecutor;
			using ::Viatra::Query::Matcher::ClassHelper;
		
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__1(_model, &subFrames);
			
			auto unprepared_exec = DistSearchPlanExecutor<CurrentlyConnectedFrame_1>(sp, *_context, 1, startOpIndex);	
			auto exec = unprepared_exec.prepare(frame);
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ISegment*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				results.insert(match);
			}
		
		}
		
		void continue_2(CurrentlyConnectedFrame_2& frame, int startOpIndex, CurrentlyConnectedMatchSet& results, std::map<int, CurrentlyConnectedFrame_2Vector>& subFrames) const {
			using ::Viatra::Query::Matcher::ISearchContext;
			using ::Viatra::Query::Plan::SearchPlan;
			using ::Viatra::Query::Plan::DistSearchPlanExecutor;
			using ::Viatra::Query::Matcher::ClassHelper;
		
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__2(_model, &subFrames);
			
			auto unprepared_exec = DistSearchPlanExecutor<CurrentlyConnectedFrame_2>(sp, *_context, 2, startOpIndex);	
			auto exec = unprepared_exec.prepare(frame);
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ITurnout*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				results.insert(match);
			}
		
		}
		
		void continue_3(CurrentlyConnectedFrame_3& frame, int startOpIndex, CurrentlyConnectedMatchSet& results, std::map<int, CurrentlyConnectedFrame_3Vector>& subFrames) const {
			using ::Viatra::Query::Matcher::ISearchContext;
			using ::Viatra::Query::Plan::SearchPlan;
			using ::Viatra::Query::Plan::DistSearchPlanExecutor;
			using ::Viatra::Query::Matcher::ClassHelper;
		
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__3(_model, &subFrames);
			
			auto unprepared_exec = DistSearchPlanExecutor<CurrentlyConnectedFrame_3>(sp, *_context, 3, startOpIndex);	
			auto exec = unprepared_exec.prepare(frame);
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ITurnout*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				results.insert(match);
			}
		
		}
		
		void continue_4(CurrentlyConnectedFrame_4& frame, int startOpIndex, CurrentlyConnectedMatchSet& results, std::map<int, CurrentlyConnectedFrame_4Vector>& subFrames) const {
			using ::Viatra::Query::Matcher::ISearchContext;
			using ::Viatra::Query::Plan::SearchPlan;
			using ::Viatra::Query::Plan::DistSearchPlanExecutor;
			using ::Viatra::Query::Matcher::ClassHelper;
		
			auto sp = CurrentlyConnectedQuerySpecification<ModelRoot>::get_plan_unbound__4(_model, &subFrames);
			
			auto unprepared_exec = DistSearchPlanExecutor<CurrentlyConnectedFrame_4>(sp, *_context, 4, startOpIndex);	
			auto exec = unprepared_exec.prepare(frame);
			
			for (auto&& frame : exec) {
				CurrentlyConnectedMatch match;
			
				match.This = static_cast<::railRoadModel::ITurnout*>(frame._0);
				match.connectedTo = static_cast<::railRoadModel::IRailRoadElement*>(frame._1);
			
				results.insert(match);
			}
		
		}
		
		
	CurrentlyConnectedMatchSet continueExec(std::string strFrameVector, int bodyID, int startOpIndex){
		switch(bodyID){
			case 0: {
				CurrentlyConnectedMatchSet resultSet;
				
				// TODO: optimize by using a simple array/vector
				std::map<int, CurrentlyConnectedFrame_0Vector> frameVectors;
				
				// For each frame
				CurrentlyConnectedFrame_0Vector::ParseFromStringCallback( strFrameVector, _model, [&](CurrentlyConnectedFrame_0& frame){
					continue_0(frame, startOpIndex, resultSet, frameVectors);														
				});
				// frameVectors are now update with possible subtask needed to be done
				for (auto & op_pbframe : frameVectors)
				{
					_queryRunner->PropagateFrameVector(bodyID, op_pbframe.first, op_pbframe.second.SerializeAsString());
				}
			
				return resultSet;
			}
			case 1: {
				CurrentlyConnectedMatchSet resultSet;
				
				// TODO: optimize by using a simple array/vector
				std::map<int, CurrentlyConnectedFrame_1Vector> frameVectors;
				
				// For each frame
				CurrentlyConnectedFrame_1Vector::ParseFromStringCallback( strFrameVector, _model, [&](CurrentlyConnectedFrame_1& frame){
					continue_1(frame, startOpIndex, resultSet, frameVectors);														
				});
				// frameVectors are now update with possible subtask needed to be done
				for (auto & op_pbframe : frameVectors)
				{
					_queryRunner->PropagateFrameVector(bodyID, op_pbframe.first, op_pbframe.second.SerializeAsString());
				}
			
				return resultSet;
			}
			case 2: {
				CurrentlyConnectedMatchSet resultSet;
				
				// TODO: optimize by using a simple array/vector
				std::map<int, CurrentlyConnectedFrame_2Vector> frameVectors;
				
				// For each frame
				CurrentlyConnectedFrame_2Vector::ParseFromStringCallback( strFrameVector, _model, [&](CurrentlyConnectedFrame_2& frame){
					continue_2(frame, startOpIndex, resultSet, frameVectors);														
				});
				// frameVectors are now update with possible subtask needed to be done
				for (auto & op_pbframe : frameVectors)
				{
					_queryRunner->PropagateFrameVector(bodyID, op_pbframe.first, op_pbframe.second.SerializeAsString());
				}
			
				return resultSet;
			}
			case 3: {
				CurrentlyConnectedMatchSet resultSet;
				
				// TODO: optimize by using a simple array/vector
				std::map<int, CurrentlyConnectedFrame_3Vector> frameVectors;
				
				// For each frame
				CurrentlyConnectedFrame_3Vector::ParseFromStringCallback( strFrameVector, _model, [&](CurrentlyConnectedFrame_3& frame){
					continue_3(frame, startOpIndex, resultSet, frameVectors);														
				});
				// frameVectors are now update with possible subtask needed to be done
				for (auto & op_pbframe : frameVectors)
				{
					_queryRunner->PropagateFrameVector(bodyID, op_pbframe.first, op_pbframe.second.SerializeAsString());
				}
			
				return resultSet;
			}
			case 4: {
				CurrentlyConnectedMatchSet resultSet;
				
				// TODO: optimize by using a simple array/vector
				std::map<int, CurrentlyConnectedFrame_4Vector> frameVectors;
				
				// For each frame
				CurrentlyConnectedFrame_4Vector::ParseFromStringCallback( strFrameVector, _model, [&](CurrentlyConnectedFrame_4& frame){
					continue_4(frame, startOpIndex, resultSet, frameVectors);														
				});
				// frameVectors are now update with possible subtask needed to be done
				for (auto & op_pbframe : frameVectors)
				{
					_queryRunner->PropagateFrameVector(bodyID, op_pbframe.first, op_pbframe.second.SerializeAsString());
				}
			
				return resultSet;
			}
			default:
				throw "Matcher continue function has an unidentified bodyID";
			break;
		}
	}
			std::map<int, std::string> distributedStartPoint()
			{
				std::map<int, std::string> ret;
	
				{
					CurrentlyConnectedFrame_0Vector	vector;
					vector.push_back(CurrentlyConnectedFrame_0{});
					ret[0] = vector.SerializeAsString();
				}	
				{
					CurrentlyConnectedFrame_1Vector	vector;
					vector.push_back(CurrentlyConnectedFrame_1{});
					ret[1] = vector.SerializeAsString();
				}	
				{
					CurrentlyConnectedFrame_2Vector	vector;
					vector.push_back(CurrentlyConnectedFrame_2{});
					ret[2] = vector.SerializeAsString();
				}	
				{
					CurrentlyConnectedFrame_3Vector	vector;
					vector.push_back(CurrentlyConnectedFrame_3{});
					ret[3] = vector.SerializeAsString();
				}	
				{
					CurrentlyConnectedFrame_4Vector	vector;
					vector.push_back(CurrentlyConnectedFrame_4{});
					ret[4] = vector.SerializeAsString();
				}	
				return ret;
			}
							
private:
	QueryRunnerT * _queryRunner;
	const ModelRoot* _model;
	const ::Viatra::Query::Matcher::ISearchContext* _context;
};

} /* namespace Safetylogic */
} /* namespace Query */
} /* namespace Viatra */


#endif /*  VIATRA__QUERY__SAFETYLOGIC__CURRENTLY_CONNECTED_MATCHER_H_ */
