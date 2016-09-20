#ifndef VIATRA__QUERY__DERIVED_FEATURES__DERIVED_FEATURES_QUERY_GROUP_H_
#define VIATRA__QUERY__DERIVED_FEATURES__DERIVED_FEATURES_QUERY_GROUP_H_

#include <atomic>
#include <mutex>
#include <thread>
		
#include "PlatformModel/Node.h"
#include "RailRoadModel/Point.h"
#include "RailRoadModel/RailRoadElement.h"
#include "RailRoadModel/RailRoadModel.h"
#include "RailRoadModel/Robot.h"
#include "RailRoadModel/RobotElement.h"
#include "RailRoadModel/RobotModel.h"
#include "RailRoadModel/RobotPart.h"
#include "RailRoadModel/Segment.h"
#include "RailRoadModel/Train.h"
#include "Viatra/Query/Matcher/ClassHelper.h"
#include "Viatra/Query/Matcher/ISearchContext.h"
#include "Viatra/Query/Matcher/ModelIndex.h"
#include "ecore/EAnnotation.h"
#include "ecore/EAttribute.h"
#include "ecore/EClass.h"
#include "ecore/EClassifier.h"
#include "ecore/EDataType.h"
#include "ecore/EEnum.h"
#include "ecore/EEnumLiteral.h"
#include "ecore/EFactory.h"
#include "ecore/EGenericType.h"
#include "ecore/EModelElement.h"
#include "ecore/ENamedElement.h"
#include "ecore/EObject.h"
#include "ecore/EOperation.h"
#include "ecore/EPackage.h"
#include "ecore/EParameter.h"
#include "ecore/EReference.h"
#include "ecore/EStringToStringMapEntry.h"
#include "ecore/EStructuralFeature.h"
#include "ecore/ETypeParameter.h"
#include "ecore/ETypedElement.h"

namespace Viatra {
namespace Query {
namespace DerivedFeatures {

class DerivedFeaturesQueryGroup{
public:
	static DerivedFeaturesQueryGroup* instance() {
		static DerivedFeaturesQueryGroup instance;
		return &instance;
	}

	const ::Viatra::Query::Matcher::ISearchContext* context() const {
		return &_isc;
	}

private:
	DerivedFeaturesQueryGroup()
		: _isc{ ::Viatra::Query::Matcher::ClassHelper::builder()
					.forClass(::RailRoadModel::Train::type_id).noSuper()
					.forClass(::RailRoadModel::RailRoadElement::type_id).noSuper()
					.forClass(::RailRoadModel::Point::type_id).noSuper()
					.forClass(::RailRoadModel::RailRoadModel::type_id).noSuper()
					.forClass(::RailRoadModel::Segment::type_id).setSuper(::RailRoadModel::RailRoadElement::type_id)
					.forClass(::RailRoadModel::RobotElement::type_id).noSuper()
					.forClass(::RailRoadModel::Robot::type_id).setSuper(::RailRoadModel::RobotElement::type_id)
					.forClass(::RailRoadModel::RobotPart::type_id).setSuper(::RailRoadModel::RobotElement::type_id)
					.forClass(::RailRoadModel::RobotModel::type_id).noSuper()
					.forClass(::PlatformModel::Node::type_id).noSuper()
					.forClass(::ecore::EAttribute::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id).setSuper(::ecore::ETypedElement::type_id).setSuper(::ecore::EStructuralFeature::type_id)
					.forClass(::ecore::EAnnotation::type_id).setSuper(::ecore::EModelElement::type_id)
					.forClass(::ecore::EClass::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id).setSuper(::ecore::EClassifier::type_id)
					.forClass(::ecore::EClassifier::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id)
					.forClass(::ecore::EDataType::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id).setSuper(::ecore::EClassifier::type_id)
					.forClass(::ecore::EEnum::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id).setSuper(::ecore::EClassifier::type_id).setSuper(::ecore::EDataType::type_id)
					.forClass(::ecore::EEnumLiteral::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id)
					.forClass(::ecore::EFactory::type_id).setSuper(::ecore::EModelElement::type_id)
					.forClass(::ecore::EModelElement::type_id).noSuper()
					.forClass(::ecore::ENamedElement::type_id).setSuper(::ecore::EModelElement::type_id)
					.forClass(::ecore::EObject::type_id).noSuper()
					.forClass(::ecore::EOperation::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id).setSuper(::ecore::ETypedElement::type_id)
					.forClass(::ecore::EPackage::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id)
					.forClass(::ecore::EParameter::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id).setSuper(::ecore::ETypedElement::type_id)
					.forClass(::ecore::EReference::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id).setSuper(::ecore::ETypedElement::type_id).setSuper(::ecore::EStructuralFeature::type_id)
					.forClass(::ecore::EStructuralFeature::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id).setSuper(::ecore::ETypedElement::type_id)
					.forClass(::ecore::ETypedElement::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id)
					.forClass(::ecore::EStringToStringMapEntry::type_id).noSuper()
					.forClass(::ecore::EGenericType::type_id).noSuper()
					.forClass(::ecore::ETypeParameter::type_id).setSuper(::ecore::EModelElement::type_id).setSuper(::ecore::ENamedElement::type_id)
					.build() } {
	}

	::Viatra::Query::Matcher::ISearchContext _isc;
};

} /* namespace DerivedFeatures */
} /* namespace Query */
} /* namespace Viatra */

namespace Viatra {
	namespace Query {
		
	class Any{
	private:
		class ContainerBase{
		public:
			virtual ~ContainerBase(){}
		};
		
		template<typename T>
		class Container : public ContainerBase{
		public:
			T data;
			Container(T const &modelRoot) : data(modelRoot) {}
		};
		
		ContainerBase* pdata;
	public:
		Any() :pdata(nullptr){}
		Any(Any const &to_copy) = delete;
		Any& operator(Any const& to_copy) = delete;
		~Any() { delete pdata; }
		
		//must implement T copy cstr properly
		template <typename T>
		void set(T const &modelRoot){
			ContainerBase *newpdata = new Container<T>(modelRoot);
			delete pdata;
			pdata = newpdata;
		}
		
		template <typename T>
		T& get(){
			return dynamic_cast<Container<T>&>(*pdata).data;
		}
		
		template <typename T>
		T const & get() const {
			return dynamic_cast<Container<T>&>(*pdata).data;
		}
	};

    struct ModelRoot
  	{
  		ModelRoot(): _number(1), _next(1) {
  			for(int i = 0; i < n; i++) _turn[i] = 0;
  		}

  		~ModelRoot(){}
  		
  		Any root;
  		
  		static atomic_int numThreads = 0; 
  		const int n = 10;
  		const std::chrono::milliseconds interval(10);
  		atomic_int _number;
  		atomic_int _next;
  		atomic_int _turn[n];
  		mutex resourceMutex;
  		
  		/*
  		 * TICKET PROTOCOL
  		 * If you want something to do as a critical 
  		 * operation you need to follow these steps
  		 * 1. id = getID()
  		 * 2. getTicket(id)
  		 * 3. wait()
  		 * 4. resourceMutex.lock()
  		 * 5. criticalBegin()
  		 * 6. //Do critical job
  		 * 7. criticalEnd()
  		 * 8. resourceMutex.unlock()
  		 * If any thread calls getTicket() need to wait() and need to call criticalEnd().
  		 * If somewhere throws an interrupt, the mutex goes in deadlock.
  		 * TODO: implement guarder or other protocol
  		*/
  		
  		int getID(){
  			return numThreads.fetch_add(1) % n;
  		}
  		
  		void getTicket(int id){
  			_turn[id] = _number.fetch_add(1);
  		}
  		
  		void wait(int id){
  			while(_turn[id] != _next){
  				this_thread::sleep_for(interval);
  			}
  		}
  		
  		void criticalBegin(){
  			return;
  		}
  		
  		void criticalEnd(){
  			_next += 1;
  		}
  	};

	template<typename T>
	struct ModelIndex<T, ModelRoot> {
		static const std::list<T*>& instances(const ModelRoot* modelRoot)
		{
			return T::_instances;
		}
	};
	}
}

#endif /*  VIATRA__QUERY__DERIVED_FEATURES__DERIVED_FEATURES_QUERY_GROUP_H_ */
