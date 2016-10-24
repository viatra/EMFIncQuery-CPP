#ifndef RAILROADMODEL_POINT_H_
#define RAILROADMODEL_POINT_H_

#include "RailRoadModel_decl.h"


#include <string>
#include <list>
#include <vector>

#include <Viatra/Query/Model/ModelElement.h>
#include <Viatra/Query/Model/RemoteElement.h>
#include <Viatra/Query/Model/LocalElement.h>
#include <Viatra/Query/Model/IModelElemService.h>

namespace RailRoadModel {

class IPoint;
class RemotePoint;
class LocalPoint;


class IPoint : 
	public virtual Viatra::Query::Model::ModelElement
{
public:
	using RemoteImplementation = RemotePoint;
	using LocalImplementation = LocalPoint;
	IPoint(Viatra::Query::Model::id_t id, bool present)
		: ModelElement(id, present)
	{}

	virtual ~IPoint() {}
	static constexpr unsigned short type_id = 3;
				
	static constexpr unsigned short get_static_type_id() {
		return type_id;
	}
	
	unsigned short get_type_id() override {
		return type_id;
	}

	virtual void set_x(double newVal) = 0;
	virtual double x() const = 0;
	virtual void set_y(double newVal) = 0;
	virtual double y() const = 0;
	
};


class RemotePoint : 
	public Viatra::Query::Model::RemoteElement, 
	public IPoint
{
public:
	RemotePoint(Viatra::Query::Model::id_t id, Viatra::Query::Model::IModelElemService* serv);
	
	virtual ~RemotePoint();
	
	unsigned short get_type_id() override {
		return IPoint::type_id;
	}

	void set_x(double newVal) override;
	double x() const override;
	void set_y(double newVal) override;
	double y() const override;
	
};

class LocalPoint : 
	public virtual Viatra::Query::Model::LocalElement, 
	public IPoint
{
private:
	static std::list<IPoint*> _instances__x__x__x__x__x__x__x;
			
	double x = 0.0;
	double y = 0.0;
	
	
public:
	LocalPoint(Viatra::Query::Model::id_t id);
	
	unsigned short get_type_id() override {
		return IPoint::type_id;
	}

				
	virtual ~LocalPoint();
	inline static std::list<IPoint*>& Instances()
	{
		return _instances__x__x__x__x__x__x__x;				
	}

	void set_x(double newVal) override;
	double x() const override;

	void set_y(double newVal) override;
	double y() const override;

	
};

} /* namespace RailRoadModel */

#endif /*  RAILROADMODEL_POINT_H_ */
