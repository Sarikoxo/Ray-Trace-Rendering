#pragma once
#include "Point3D.h"
#include "Vector3D.h"

class Ray
{
public:
	//origin
	Point3D o;
	//direction
	Vector3D d;

	//default constructor
	Ray(void) {};
	//constructor
	Ray(const Point3D& origin, const Vector3D& dir) :o(origin), d(dir) {};
	//copy constructor
	Ray(const Ray& ray) :o(ray.o), d(ray.d) {};
	//assignment operator
	Ray& operator=(const Ray& rhs) { o = rhs.o; d = rhs.d; return *this; };
	//deconstruction
	~Ray(void) {};
};