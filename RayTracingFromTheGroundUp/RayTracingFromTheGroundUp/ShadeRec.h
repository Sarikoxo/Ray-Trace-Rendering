#pragma once

#include "World.h"
#include "Normal.h"
#include "Point3D.h"

class ShadeRec
{
public:
	//did the ray hit an object
	bool hit_an_object=false;
	//world coordinates of hit point
	Point3D local_hit_point;
	//normal at hit point
	Normal normal;
	//world reference for shading
	World& w;
	
	//constructor
	ShadeRec(World& wr) :w(wr) {};
	ShadeRec(const ShadeRec& sr) :
		hit_an_object(sr.hit_an_object),
		local_hit_point(sr.local_hit_point),
		normal(sr.normal),
		w(sr.w) {};
	~ShadeRec(void) {};

	//assignment operator
	ShadeRec& operator=(const ShadeRec& rhs)
	{
		hit_an_object = rhs.hit_an_object;
		local_hit_point = rhs.local_hit_point;
		normal = rhs.normal;
		w = rhs.w;

		return *this;
	};



};