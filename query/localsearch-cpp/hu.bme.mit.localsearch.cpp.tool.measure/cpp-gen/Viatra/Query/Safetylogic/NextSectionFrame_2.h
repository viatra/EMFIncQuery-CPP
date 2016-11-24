#ifndef VIATRA__QUERY__SAFETYLOGIC__NEXT_SECTION_FRAME_2_H_
#define VIATRA__QUERY__SAFETYLOGIC__NEXT_SECTION_FRAME_2_H_

#include <Viatra/Query/Util/Convert.h>
#include <stdint.h>
#include <vector>
		
#include "PB_safetylogic.pb.h"
#include "railRoadModel/Path.h"
#include "railRoadModel/RailRoadElement.h"

namespace Viatra {
namespace Query {
namespace Safetylogic {


class NextSectionFrame_2Vector;

struct NextSectionFrame_2 {
	
	using PBFrame = PB_NextSectionFrame_2;
	using FrameVector = NextSectionFrame_2Vector;
	
	::railRoadModel::IRailRoadElement* _0 = nullptr;
	::railRoadModel::ITurnout* _1 = nullptr;
	::railRoadModel::IRailRoadElement* _2 = nullptr;
	bool _3 = false;
	::railRoadModel::IRailRoadElement* _4 = nullptr;
	::railRoadModel::IPath* _5 = nullptr;
	::railRoadModel::IRailRoadElement* _6 = nullptr;
	// toString
	
	std::string toString() const
	{
		std::string ret = "[";
		ret += "Old=";
		ret += (_0 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_0->id()));
		ret += ",viablePaths<0>_This=";
		ret += (_1 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_1->id()));
		ret += ",Next=";
		ret += (_2 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_2->id()));
		ret += ",viablePaths<0>_.virtual{0}=";
		ret += Viatra::Query::Util::Convert::ToString(_3);
		ret += ",viablePaths<0>_divergent=";
		ret += (_4 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_4->id()));
		ret += ",viablePaths<0>_path=";
		ret += (_5 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_5->id()));
		ret += ",viablePaths<0>_top=";
		ret += (_6 == nullptr ? "null" : Viatra::Query::Util::Convert::ToString(_6->id()));
	
		return ret + ']';
	}
	// Serialization and deserialization
	std::string SerializeAsString()
	{
		PB_NextSectionFrame_2 pbframe;
		
		pbframe.set__0(_0 == nullptr ? -1 : _0->id());
		pbframe.set__1(_1 == nullptr ? -1 : _1->id());
		pbframe.set__2(_2 == nullptr ? -1 : _2->id());
		pbframe.set__3(_3);
		pbframe.set__4(_4 == nullptr ? -1 : _4->id());
		pbframe.set__5(_5 == nullptr ? -1 : _5->id());
		pbframe.set__6(_6 == nullptr ? -1 : _6->id());
		
		return pbframe.SerializeAsString();
	}
		
	template<typename ModelRoot>
	void ParseFromString(std::string str, ModelRoot *mr)
	{
		PB_NextSectionFrame_2 pbframe;
		pbframe.ParseFromString(str);
		
		_0 = (pbframe._0() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._0()));
		
		_1 = (pbframe._1() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbframe._1()));
		
		_2 = (pbframe._2() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._2()));
		
		_3 = pbframe._3();
		
		_4 = (pbframe._4() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._4()));
		
		_5 = (pbframe._5() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbframe._5()));
		
		_6 = (pbframe._6() == -1) 
			? nullptr 
			: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbframe._6()));
		
	}
};
		
class NextSectionFrame_2Vector 
	: private std::vector<NextSectionFrame_2>
{
	public:
	using std::vector<NextSectionFrame_2>::push_back;
	using std::vector<NextSectionFrame_2>::clear;
	using std::vector<NextSectionFrame_2>::empty;
	using std::vector<NextSectionFrame_2>::size;
	using std::vector<NextSectionFrame_2>::begin;
	using std::vector<NextSectionFrame_2>::end;
	
	// Serialization and deserialization
	
	template<typename ModelRoot, typename Action>
	static void ParseFromStringCallback( const std::string& serialized_data, ModelRoot * mr, Action action )
	{
		PB_NextSectionFrame_2Vector pbFrameVector;
		pbFrameVector.ParseFromString(serialized_data);
		
		NextSectionFrame_2 frame;
		for (auto & pbFrame : pbFrameVector.frames())
		{
			frame._0 = (pbFrame._0() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._0()));
			
			frame._1 = (pbFrame._1() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::ITurnout*>(mr->findModelElementByID(pbFrame._1()));
			
			frame._2 = (pbFrame._2() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._2()));
			
			frame._3 = pbFrame._3();
			
			frame._4 = (pbFrame._4() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._4()));
			
			frame._5 = (pbFrame._5() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IPath*>(mr->findModelElementByID(pbFrame._5()));
			
			frame._6 = (pbFrame._6() == -1) 
				? nullptr 
				: dynamic_cast<::railRoadModel::IRailRoadElement*>(mr->findModelElementByID(pbFrame._6()));
			
			
			action(frame);
		}
	}
	
	std::string SerializeAsString()
	{
		PB_NextSectionFrame_2Vector pbFrameVector;
		
		for(auto& storedVector: *this){
			auto & pbFrame= *pbFrameVector.add_frames();
			pbFrame.set__0(storedVector._0 == nullptr ? -1 : storedVector._0->id());
			pbFrame.set__1(storedVector._1 == nullptr ? -1 : storedVector._1->id());
			pbFrame.set__2(storedVector._2 == nullptr ? -1 : storedVector._2->id());
			pbFrame.set__3(storedVector._3);
			pbFrame.set__4(storedVector._4 == nullptr ? -1 : storedVector._4->id());
			pbFrame.set__5(storedVector._5 == nullptr ? -1 : storedVector._5->id());
			pbFrame.set__6(storedVector._6 == nullptr ? -1 : storedVector._6->id());
		}
		return pbFrameVector.SerializeAsString();
	}
};


} /* namespace Safetylogic */
} /* namespace Query */
} /* namespace Viatra */


#endif /*  VIATRA__QUERY__SAFETYLOGIC__NEXT_SECTION_FRAME_2_H_ */
