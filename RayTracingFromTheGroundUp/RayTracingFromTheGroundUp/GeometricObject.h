#pragma once

#include "Ray.h"
#include "ShadeRec.h"

class GeometricObject
{
public:
	virtual bool hit(const Ray& ray, double& tmin, ShadeRec& sr) const = 0;

};
