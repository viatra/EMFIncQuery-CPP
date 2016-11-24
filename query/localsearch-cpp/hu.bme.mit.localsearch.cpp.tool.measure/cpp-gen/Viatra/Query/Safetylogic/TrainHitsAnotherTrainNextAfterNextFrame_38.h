#ifndef VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_NEXT_AFTER_NEXT_FRAME_38_H_
#define VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_NEXT_AFTER_NEXT_FRAME_38_H_

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


class TrainHitsAnotherTrainNextAfterNextFrame_38Vector;

struct TrainHitsAnotherTrainNextAfterNextFrame_38 {
	
	using PBFrame = PB_TrainHitsAnotherTrainNextAfterNextFrame_38;
	using FrameVector = TrainHitsAnotherTrainNextAfterNextFrame_38Vector;
	
	::railRoadModel::ITrain* _0 = nullptr;
	::railRoadModel::ITrain* _1 = nullptr;
	::railRoadModel::IRailRoadElement* _2 = nullptr;
	::railRoadModel::IPath* _3 = nullptr;
	bool _4 = false;
	::railRoadModel::ISegment* _5 = nullptr;
	::railRoadModel::IPath* _6 = nullptr;
	::railRoadModel::IRailRoadElement* _7 = nullptr;
	::railRoadModel::IRailRoadElement* _8 = nullptr;
	::railRoadModel::ITurnout* _9 = nullptr;
	::railRoadModel::IRailRoadElement* _10 = nullptr;
	::railRoadModel::IRailRoadElement* _11 = nullptr;
	::railRoadModel::IRailRoadElement* _12 = nullptr;
	// toString
	
	std::string toString() const
	{
		std::string ret = "[";
		ret += "Offender=";
		ret += (_0 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_0->id()));
		ret += ",Victim=";
		ret += (_1 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_1->id()));
		ret += ",nextSection<1>_viablePaths<0>_top=";
		ret += (_2 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_2->id()));
		ret += ",nextSection<0>_viablePaths<0>_path=";
		ret += (_3 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_3->id()));
		ret += ",nextSection<1>_viablePaths<0>_.virtual{0}=";
		ret += Viatra::Query::Util::Convert::ToString(_4);
		ret += ",nextSection<1>_Old=";
		ret += (_5 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_5->id()));
		ret += ",nextSection<1>_viablePaths<0>_path=";
		ret += (_6 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_6->id()));
		ret += ",nextSection<1>_viablePaths<0>_divergent=";
		ret += (_7 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_7->id()));
		ret += ",nextSection<0>_viablePaths<0>_connected2=";
		ret += (_8 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_8->id()));
		ret += ",nextSection<1>_viablePaths<0>_This=";
		ret += (_9 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_9->id()));
		ret += ",nextSection<1>_Next=";
		ret += (_10 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_10->id()));
		ret += ",nextSection<0>_viablePaths<0>_connected1=";
		ret += (_11 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_11->id()));
		ret += ",nextSection<0>_Old=";
		ret += (_12 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_12->id()));
	
		return ret + ']';
	}
	// Serialization and deserialization
	std::string SerializeAsString()
	{
		PB_TrainHitsAnotherTrainNextAfterNextFrame_38 pbframe;
		
		pbframe.set__0(_0 == nullptr ? -1 : _0->id());
		pbframe.set__1(_1 == nullptr ? -1 : _1->id());
		pbframe.set__2(_2 == nullptr ? -1 : _2->id());
		pbframe.set__3(_3 == nullptr ? -1 : _3->id());
		pbframe.set__4(_4);
		pbframe.set__5(_5 == nullptr ? -1 : _5->id());
		pbframe.set__6(_6 == nullptr ? -1 : _6->id());
		pbframe.set__7(_7 == nullptr ? -1 : _7->id());
		pbframe.set__8(_8 == nullptr ? -1 : _8->id());
		pbframe.set__9(_9 == nullptr ? -1 : _9->id());
		pbframe.set__10(_10 == nullptr ? -1 : _10->id());
		pbframe.set__11(_11 == nullptr ? -1 : _11->id());
		pbframe.set__12(_12 == nullptr ? -1 : _12->id());
		
		return pbframe.SerializeAsString();
	}
		
	template<typename ModelRoot>
	void ParseFromString(std::string str, ModelRoot *mr)
	{
		PB_TrainHitsAnotherTrainNextAfterNextFrame_38 pbframe;
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
			: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbframe._3()));
		
		_4 = pbframe._4();
		
		_5 = (pbframe._5() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ISegment*>(mr->findModelElementByID(pbframe._5()));
		
		_6 = (pbframe._6() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbframe._6()));
		
		_7 = (pbframe._7() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._7()));
		
		_8 = (pbframe._8() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._8()));
		
		_9 = (pbframe._9() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbframe._9()));
		
		_10 = (pbframe._10() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._10()));
		
		_11 = (pbframe._11() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._11()));
		
		_12 = (pbframe._12() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._12()));
		
	}
};
		
class TrainHitsAnotherTrainNextAfterNextFrame_38Vector 
	: private std::vector<TrainHitsAnotherTrainNextAfterNextFrame_38>
{
	public:
	using std::vector<TrainHitsAnotherTrainNextAfterNextFrame_38>::push_back;
	using std::vector<TrainHitsAnotherTrainNextAfterNextFrame_38>::clear;
	using std::vector<TrainHitsAnotherTrainNextAfterNextFrame_38>::empty;
	using std::vector<TrainHitsAnotherTrainNextAfterNextFrame_38>::size;
	using std::vector<TrainHitsAnotherTrainNextAfterNextFrame_38>::begin;
	using std::vector<TrainHitsAnotherTrainNextAfterNextFrame_38>::end;
	
	// Serialization and deserialization
	
	template<typename ModelRoot, typename Action>
	static void ParseFromStringCallback( const std::string& serialized_data, ModelRoot * mr, Action action )
	{
		PB_TrainHitsAnotherTrainNextAfterNextFrame_38Vector pbFrameVector;
		pbFrameVector.ParseFromString(serialized_data);
		
		TrainHitsAnotherTrainNextAfterNextFrame_38 frame;
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
				: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbFrame._3()));
			
			frame._4 = pbFrame._4();
			
			frame._5 = (pbFrame._5() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ISegment*>(mr->findModelElementByID(pbFrame._5()));
			
			frame._6 = (pbFrame._6() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbFrame._6()));
			
			frame._7 = (pbFrame._7() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._7()));
			
			frame._8 = (pbFrame._8() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._8()));
			
			frame._9 = (pbFrame._9() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbFrame._9()));
			
			frame._10 = (pbFrame._10() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._10()));
			
			frame._11 = (pbFrame._11() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._11()));
			
			frame._12 = (pbFrame._12() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._12()));
			
			
			action(frame);
		}
	}
	
	std::string SerializeAsString()
	{
		PB_TrainHitsAnotherTrainNextAfterNextFrame_38Vector pbFrameVector;
		
		for(auto& storedVector: *this){
			auto & pbFrame= *pbFrameVector.add_frames();
			pbFrame.set__0(storedVector._0 == nullptr ? -1 : storedVector._0->id());
			pbFrame.set__1(storedVector._1 == nullptr ? -1 : storedVector._1->id());
			pbFrame.set__2(storedVector._2 == nullptr ? -1 : storedVector._2->id());
			pbFrame.set__3(storedVector._3 == nullptr ? -1 : storedVector._3->id());
			pbFrame.set__4(storedVector._4);
			pbFrame.set__5(storedVector._5 == nullptr ? -1 : storedVector._5->id());
			pbFrame.set__6(storedVector._6 == nullptr ? -1 : storedVector._6->id());
			pbFrame.set__7(storedVector._7 == nullptr ? -1 : storedVector._7->id());
			pbFrame.set__8(storedVector._8 == nullptr ? -1 : storedVector._8->id());
			pbFrame.set__9(storedVector._9 == nullptr ? -1 : storedVector._9->id());
			pbFrame.set__10(storedVector._10 == nullptr ? -1 : storedVector._10->id());
			pbFrame.set__11(storedVector._11 == nullptr ? -1 : storedVector._11->id());
			pbFrame.set__12(storedVector._12 == nullptr ? -1 : storedVector._12->id());
		}
		return pbFrameVector.SerializeAsString();
	}
};


} /* namespace Safetylogic */
} /* namespace Query */
} /* namespace Viatra */


#endif /*  VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_NEXT_AFTER_NEXT_FRAME_38_H_ */
