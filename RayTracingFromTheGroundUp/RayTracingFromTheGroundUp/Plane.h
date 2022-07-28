#pragma once

#include "GeometricObject.h"

class Plane :public GeometricObject
{
public:
	Plane(void) {};
	Plane(const Point3D p, const Normal& n) :point(p), normal(n) {};

	virtual bool hit(const Ray& ray, double& t, ShadeRec& s)const;

private:
	//point through which plane passes
	Point3D point;
	//normal to the plane
	Normal normal;

	static const double kEpsilon;
};

bool Plane::hit(const Ray& ray, double& tmin, ShadeRec& sr)const
{

	return true;
}