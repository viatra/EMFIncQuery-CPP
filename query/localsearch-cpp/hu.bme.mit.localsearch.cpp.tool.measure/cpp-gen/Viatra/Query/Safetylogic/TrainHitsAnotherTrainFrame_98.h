#ifndef VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_FRAME_98_H_
#define VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_FRAME_98_H_

#include <Viatra/Query/Util/Convert.h>
#include <stdint.h>
#include <vector>
		
#include "PB_safetylogic.pb.h"
#include "railRoadModel/Path.h"
#include "railRoadModel/RailRoadElement.h"
#include "railRoadModel/Train.h"

namespace Viatra {
namespace Query {
namespace Safetylogic {


class TrainHitsAnotherTrainFrame_98Vector;

struct TrainHitsAnotherTrainFrame_98 {
	
	using PBFrame = PB_TrainHitsAnotherTrainFrame_98;
	using FrameVector = TrainHitsAnotherTrainFrame_98Vector;
	
	::railRoadModel::ITrain* _0 = nullptr;
	::railRoadModel::ITrain* _1 = nullptr;
	::railRoadModel::IRailRoadElement* _2 = nullptr;
	::railRoadModel::ITurnout* _3 = nullptr;
	::railRoadModel::IRailRoadElement* _4 = nullptr;
	::railRoadModel::IRailRoadElement* _5 = nullptr;
	::railRoadModel::IPath* _6 = nullptr;
	bool _7 = false;
	bool _8 = false;
	::railRoadModel::IRailRoadElement* _9 = nullptr;
	::railRoadModel::IRailRoadElement* _10 = nullptr;
	::railRoadModel::ITurnout* _11 = nullptr;
	::railRoadModel::IRailRoadElement* _12 = nullptr;
	::railRoadModel::IRailRoadElement* _13 = nullptr;
	::railRoadModel::IPath* _14 = nullptr;
	// toString
	
	std::string toString() const
	{
		std::string ret = "[";
		ret += "trainHitsAnotherTrainNextAfterNext<0>_Offender=";
		ret += (_0 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_0->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_Victim=";
		ret += (_1 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_1->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_top=";
		ret += (_2 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_2->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_Old=";
		ret += (_3 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_3->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_Next=";
		ret += (_4 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_4->id()));
		ret += ",_trainHitsAnotherTrainNextAfterNext<0>__nextSection<1>__<0>=";
		ret += (_5 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_5->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_path=";
		ret += (_6 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_6->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_.virtual{0}=";
		ret += Viatra::Query::Util::Convert::ToString(_7);
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_.virtual{0}=";
		ret += Viatra::Query::Util::Convert::ToString(_8);
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_Old=";
		ret += (_9 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_9->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_divergent=";
		ret += (_10 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_10->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_Next=";
		ret += (_11 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_11->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_top=";
		ret += (_12 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_12->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_divergent=";
		ret += (_13 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_13->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_path=";
		ret += (_14 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_14->id()));
	
		return ret + ']';
	}
	// Serialization and deserialization
	std::string SerializeAsString()
	{
		PB_TrainHitsAnotherTrainFrame_98 pbframe;
		
		pbframe.set__0(_0 == nullptr ? -1 : _0->id());
		pbframe.set__1(_1 == nullptr ? -1 : _1->id());
		pbframe.set__2(_2 == nullptr ? -1 : _2->id());
		pbframe.set__3(_3 == nullptr ? -1 : _3->id());
		pbframe.set__4(_4 == nullptr ? -1 : _4->id());
		pbframe.set__5(_5 == nullptr ? -1 : _5->id());
		pbframe.set__6(_6 == nullptr ? -1 : _6->id());
		pbframe.set__7(_7);
		pbframe.set__8(_8);
		pbframe.set__9(_9 == nullptr ? -1 : _9->id());
		pbframe.set__10(_10 == nullptr ? -1 : _10->id());
		pbframe.set__11(_11 == nullptr ? -1 : _11->id());
		pbframe.set__12(_12 == nullptr ? -1 : _12->id());
		pbframe.set__13(_13 == nullptr ? -1 : _13->id());
		pbframe.set__14(_14 == nullptr ? -1 : _14->id());
		
		return pbframe.SerializeAsString();
	}
		
	template<typename ModelRoot>
	void ParseFromString(std::string str, ModelRoot *mr)
	{
		PB_TrainHitsAnotherTrainFrame_98 pbframe;
		pbframe.ParseFromString(str);
		
		_0 = (pbframe._0() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITrain*>(mr->findModelElementByID(pbframe._0()));
		
		_1 = (pbframe._1() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITrain*>(mr->findModelElementByID(pbframe._1()));
		
		_2 = (pbframe._2() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._2()));
		
		_3 = (pbframe._3() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbframe._3()));
		
		_4 = (pbframe._4() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._4()));
		
		_5 = (pbframe._5() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._5()));
		
		_6 = (pbframe._6() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbframe._6()));
		
		_7 = pbframe._7();
		
		_8 = pbframe._8();
		
		_9 = (pbframe._9() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._9()));
		
		_10 = (pbframe._10() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._10()));
		
		_11 = (pbframe._11() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbframe._11()));
		
		_12 = (pbframe._12() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._12()));
		
		_13 = (pbframe._13() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._13()));
		
		_14 = (pbframe._14() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbframe._14()));
		
	}
};
		
class TrainHitsAnotherTrainFrame_98Vector 
	: private std::vector<TrainHitsAnotherTrainFrame_98>
{
	public:
	using std::vector<TrainHitsAnotherTrainFrame_98>::push_back;
	using std::vector<TrainHitsAnotherTrainFrame_98>::clear;
	using std::vector<TrainHitsAnotherTrainFrame_98>::empty;
	using std::vector<TrainHitsAnotherTrainFrame_98>::size;
	using std::vector<TrainHitsAnotherTrainFrame_98>::begin;
	using std::vector<TrainHitsAnotherTrainFrame_98>::end;
	
	// Serialization and deserialization
	
	template<typename ModelRoot, typename Action>
	static void ParseFromStringCallback( const std::string& serialized_data, ModelRoot * mr, Action action )
	{
		PB_TrainHitsAnotherTrainFrame_98Vector pbFrameVector;
		pbFrameVector.ParseFromString(serialized_data);
		
		TrainHitsAnotherTrainFrame_98 frame;
		for (auto & pbFrame : pbFrameVector.frames())
		{
			frame._0 = (pbFrame._0() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITrain*>(mr->findModelElementByID(pbFrame._0()));
			
			frame._1 = (pbFrame._1() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITrain*>(mr->findModelElementByID(pbFrame._1()));
			
			frame._2 = (pbFrame._2() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._2()));
			
			frame._3 = (pbFrame._3() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbFrame._3()));
			
			frame._4 = (pbFrame._4() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._4()));
			
			frame._5 = (pbFrame._5() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._5()));
			
			frame._6 = (pbFrame._6() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbFrame._6()));
			
			frame._7 = pbFrame._7();
			
			frame._8 = pbFrame._8();
			
			frame._9 = (pbFrame._9() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._9()));
			
			frame._10 = (pbFrame._10() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._10()));
			
			frame._11 = (pbFrame._11() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbFrame._11()));
			
			frame._12 = (pbFrame._12() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._12()));
			
			frame._13 = (pbFrame._13() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._13()));
			
			frame._14 = (pbFrame._14() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbFrame._14()));
			
			
			action(frame);
		}
	}
	
	std::string SerializeAsString()
	{
		PB_TrainHitsAnotherTrainFrame_98Vector pbFrameVector;
		
		for(auto& storedVector: *this){
			auto & pbFrame= *pbFrameVector.add_frames();
			pbFrame.set__0(storedVector._0 == nullptr ? -1 : storedVector._0->id());
			pbFrame.set__1(storedVector._1 == nullptr ? -1 : storedVector._1->id());
			pbFrame.set__2(storedVector._2 == nullptr ? -1 : storedVector._2->id());
			pbFrame.set__3(storedVector._3 == nullptr ? -1 : storedVector._3->id());
			pbFrame.set__4(storedVector._4 == nullptr ? -1 : storedVector._4->id());
			pbFrame.set__5(storedVector._5 == nullptr ? -1 : storedVector._5->id());
			pbFrame.set__6(storedVector._6 == nullptr ? -1 : storedVector._6->id());
			pbFrame.set__7(storedVector._7);
			pbFrame.set__8(storedVector._8);
			pbFrame.set__9(storedVector._9 == nullptr ? -1 : storedVector._9->id());
			pbFrame.set__10(storedVector._10 == nullptr ? -1 : storedVector._10->id());
			pbFrame.set__11(storedVector._11 == nullptr ? -1 : storedVector._11->id());
			pbFrame.set__12(storedVector._12 == nullptr ? -1 : storedVector._12->id());
			pbFrame.set__13(storedVector._13 == nullptr ? -1 : storedVector._13->id());
			pbFrame.set__14(storedVector._14 == nullptr ? -1 : storedVector._14->id());
		}
		return pbFrameVector.SerializeAsString();
	}
};


} /* namespace Safetylogic */
} /* namespace Query */
} /* namespace Viatra */


#endif /*  VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_FRAME_98_H_ */
