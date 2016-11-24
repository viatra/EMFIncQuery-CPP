#ifndef VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_FRAME_71_H_
#define VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_FRAME_71_H_

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


class TrainHitsAnotherTrainFrame_71Vector;

struct TrainHitsAnotherTrainFrame_71 {
	
	using PBFrame = PB_TrainHitsAnotherTrainFrame_71;
	using FrameVector = TrainHitsAnotherTrainFrame_71Vector;
	
	::railRoadModel::ITrain* _0 = nullptr;
	::railRoadModel::ITrain* _1 = nullptr;
	bool _2 = false;
	::railRoadModel::IPath* _3 = nullptr;
	::railRoadModel::IPath* _4 = nullptr;
	::railRoadModel::IRailRoadElement* _5 = nullptr;
	::railRoadModel::IRailRoadElement* _6 = nullptr;
	::railRoadModel::IRailRoadElement* _7 = nullptr;
	::railRoadModel::IRailRoadElement* _8 = nullptr;
	::railRoadModel::IRailRoadElement* _9 = nullptr;
	::railRoadModel::ITurnout* _10 = nullptr;
	::railRoadModel::IRailRoadElement* _11 = nullptr;
	::railRoadModel::ITurnout* _12 = nullptr;
	bool _13 = false;
	::railRoadModel::IRailRoadElement* _14 = nullptr;
	::railRoadModel::IRailRoadElement* _15 = nullptr;
	// toString
	
	std::string toString() const
	{
		std::string ret = "[";
		ret += "trainHitsAnotherTrainNextAfterNext<0>_Offender=";
		ret += (_0 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_0->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_Victim=";
		ret += (_1 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_1->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_.virtual{0}=";
		ret += Viatra::Query::Util::Convert::ToString(_2);
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_path=";
		ret += (_3 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_3->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_path=";
		ret += (_4 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_4->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_divergent=";
		ret += (_5 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_5->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_straight=";
		ret += (_6 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_6->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_Next=";
		ret += (_7 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_7->id()));
		ret += ",_trainHitsAnotherTrainNextAfterNext<0>__nextSection<1>__<0>=";
		ret += (_8 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_8->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_Old=";
		ret += (_9 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_9->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_This=";
		ret += (_10 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_10->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_top=";
		ret += (_11 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_11->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<0>_viablePaths<0>_This=";
		ret += (_12 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_12->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_.virtual{0}=";
		ret += Viatra::Query::Util::Convert::ToString(_13);
		ret += ",_trainHitsAnotherTrainNextAfterNext<0>__nextSection<0>__<0>=";
		ret += (_14 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_14->id()));
		ret += ",trainHitsAnotherTrainNextAfterNext<0>_nextSection<1>_viablePaths<0>_top=";
		ret += (_15 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_15->id()));
	
		return ret + ']';
	}
	// Serialization and deserialization
	std::string SerializeAsString()
	{
		PB_TrainHitsAnotherTrainFrame_71 pbframe;
		
		pbframe.set__0(_0 == nullptr ? -1 : _0->id());
		pbframe.set__1(_1 == nullptr ? -1 : _1->id());
		pbframe.set__2(_2);
		pbframe.set__3(_3 == nullptr ? -1 : _3->id());
		pbframe.set__4(_4 == nullptr ? -1 : _4->id());
		pbframe.set__5(_5 == nullptr ? -1 : _5->id());
		pbframe.set__6(_6 == nullptr ? -1 : _6->id());
		pbframe.set__7(_7 == nullptr ? -1 : _7->id());
		pbframe.set__8(_8 == nullptr ? -1 : _8->id());
		pbframe.set__9(_9 == nullptr ? -1 : _9->id());
		pbframe.set__10(_10 == nullptr ? -1 : _10->id());
		pbframe.set__11(_11 == nullptr ? -1 : _11->id());
		pbframe.set__12(_12 == nullptr ? -1 : _12->id());
		pbframe.set__13(_13);
		pbframe.set__14(_14 == nullptr ? -1 : _14->id());
		pbframe.set__15(_15 == nullptr ? -1 : _15->id());
		
		return pbframe.SerializeAsString();
	}
		
	template<typename ModelRoot>
	void ParseFromString(std::string str, ModelRoot *mr)
	{
		PB_TrainHitsAnotherTrainFrame_71 pbframe;
		pbframe.ParseFromString(str);
		
		_0 = (pbframe._0() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITrain*>(mr->findModelElementByID(pbframe._0()));
		
		_1 = (pbframe._1() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITrain*>(mr->findModelElementByID(pbframe._1()));
		
		_2 = pbframe._2();
		
		_3 = (pbframe._3() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbframe._3()));
		
		_4 = (pbframe._4() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbframe._4()));
		
		_5 = (pbframe._5() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._5()));
		
		_6 = (pbframe._6() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._6()));
		
		_7 = (pbframe._7() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._7()));
		
		_8 = (pbframe._8() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._8()));
		
		_9 = (pbframe._9() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._9()));
		
		_10 = (pbframe._10() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbframe._10()));
		
		_11 = (pbframe._11() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._11()));
		
		_12 = (pbframe._12() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbframe._12()));
		
		_13 = pbframe._13();
		
		_14 = (pbframe._14() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._14()));
		
		_15 = (pbframe._15() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._15()));
		
	}
};
		
class TrainHitsAnotherTrainFrame_71Vector 
	: private std::vector<TrainHitsAnotherTrainFrame_71>
{
	public:
	using std::vector<TrainHitsAnotherTrainFrame_71>::push_back;
	using std::vector<TrainHitsAnotherTrainFrame_71>::clear;
	using std::vector<TrainHitsAnotherTrainFrame_71>::empty;
	using std::vector<TrainHitsAnotherTrainFrame_71>::size;
	using std::vector<TrainHitsAnotherTrainFrame_71>::begin;
	using std::vector<TrainHitsAnotherTrainFrame_71>::end;
	
	// Serialization and deserialization
	
	template<typename ModelRoot, typename Action>
	static void ParseFromStringCallback( const std::string& serialized_data, ModelRoot * mr, Action action )
	{
		PB_TrainHitsAnotherTrainFrame_71Vector pbFrameVector;
		pbFrameVector.ParseFromString(serialized_data);
		
		TrainHitsAnotherTrainFrame_71 frame;
		for (auto & pbFrame : pbFrameVector.frames())
		{
			frame._0 = (pbFrame._0() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITrain*>(mr->findModelElementByID(pbFrame._0()));
			
			frame._1 = (pbFrame._1() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITrain*>(mr->findModelElementByID(pbFrame._1()));
			
			frame._2 = pbFrame._2();
			
			frame._3 = (pbFrame._3() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbFrame._3()));
			
			frame._4 = (pbFrame._4() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbFrame._4()));
			
			frame._5 = (pbFrame._5() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._5()));
			
			frame._6 = (pbFrame._6() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._6()));
			
			frame._7 = (pbFrame._7() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._7()));
			
			frame._8 = (pbFrame._8() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._8()));
			
			frame._9 = (pbFrame._9() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._9()));
			
			frame._10 = (pbFrame._10() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbFrame._10()));
			
			frame._11 = (pbFrame._11() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._11()));
			
			frame._12 = (pbFrame._12() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbFrame._12()));
			
			frame._13 = pbFrame._13();
			
			frame._14 = (pbFrame._14() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._14()));
			
			frame._15 = (pbFrame._15() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._15()));
			
			
			action(frame);
		}
	}
	
	std::string SerializeAsString()
	{
		PB_TrainHitsAnotherTrainFrame_71Vector pbFrameVector;
		
		for(auto& storedVector: *this){
			auto & pbFrame= *pbFrameVector.add_frames();
			pbFrame.set__0(storedVector._0 == nullptr ? -1 : storedVector._0->id());
			pbFrame.set__1(storedVector._1 == nullptr ? -1 : storedVector._1->id());
			pbFrame.set__2(storedVector._2);
			pbFrame.set__3(storedVector._3 == nullptr ? -1 : storedVector._3->id());
			pbFrame.set__4(storedVector._4 == nullptr ? -1 : storedVector._4->id());
			pbFrame.set__5(storedVector._5 == nullptr ? -1 : storedVector._5->id());
			pbFrame.set__6(storedVector._6 == nullptr ? -1 : storedVector._6->id());
			pbFrame.set__7(storedVector._7 == nullptr ? -1 : storedVector._7->id());
			pbFrame.set__8(storedVector._8 == nullptr ? -1 : storedVector._8->id());
			pbFrame.set__9(storedVector._9 == nullptr ? -1 : storedVector._9->id());
			pbFrame.set__10(storedVector._10 == nullptr ? -1 : storedVector._10->id());
			pbFrame.set__11(storedVector._11 == nullptr ? -1 : storedVector._11->id());
			pbFrame.set__12(storedVector._12 == nullptr ? -1 : storedVector._12->id());
			pbFrame.set__13(storedVector._13);
			pbFrame.set__14(storedVector._14 == nullptr ? -1 : storedVector._14->id());
			pbFrame.set__15(storedVector._15 == nullptr ? -1 : storedVector._15->id());
		}
		return pbFrameVector.SerializeAsString();
	}
};


} /* namespace Safetylogic */
} /* namespace Query */
} /* namespace Viatra */


#endif /*  VIATRA__QUERY__SAFETYLOGIC__TRAIN_HITS_ANOTHER_TRAIN_FRAME_71_H_ */
