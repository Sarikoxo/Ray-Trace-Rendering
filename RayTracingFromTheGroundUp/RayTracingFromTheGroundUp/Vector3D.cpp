#include "Vector3D.h"

// default constructor
Vector3D::Vector3D(void)
{

}

// constructor
Vector3D::Vector3D(double a)
{
	x = y = z = a;
}

// constructor
Vector3D::Vector3D(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}

// copy constructor
Vector3D::Vector3D(const Vector3D& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}

// destructor
Vector3D::~Vector3D(void)
{

}

// assignment operator
Vector3D& Vector3D::operator=(const Vector3D& rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
	return *this;
}

// multiplication by a double on the right
Vector3D Vector3D::operator*(const double a)
{
	x *= a;;
	y *= b;
	z *= c;
	return *this;
}

// multiplication by a vector on the right
Vector3D Vector3D::operator*(const Vector3D& rhs)
{
	x *= rhs.x;
	y *= rhs.y;
	z *= rhs.z;
	return *this;
}

// division by a double on the right
Vector3D Vector3D::operator/(const double a)
{
	x /= a;
	y /= a;
	z /= a;
	return *this;
}

// division by a vector on the right
Vector3D Vector3D::operator/(const Vector3D rhs)
{
	x /= rhs.x;
	y /= rhs.y;
	z /= rhs.z;
	return *this;
}

// addition by a double on the right
Vector3D Vector3D::operator+(const double a)
{
	x += a;
	y += a;
	z += a;
	return *this;
}

// addition by a vector on the right
Vector3D Vector3D::operator+(const Vector3D& rhs)
{
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;
	return *this;
}

// compound addition by a double on the right
Vector3D& Vector3D::operator+=(const double a)
{
	x += a;
	y += a;
	z += a;
	return *this;
}

// compound addition by a vector on the right
Vector3D& Vector3D::operator+=(const Vector3D& rhs)
{
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;
	return *this;
}

// subtraction by a double on the right
Vector3D Vector3D::operator-(const double a)
{
	x -= a;
	y -= a;
	z -= a;
	return *this;
}

// subtraction by a vector on the right
Vector3D Vector3D::operator-(const Vector3D& rhs)
{
	x -= rhs.x;
	y -= rhs.y;
	z -= rhs.z;
	return *this;
}

// compound subtraction by a double on the right
Vector3D Vector3D::operator-=(const double a)
{
	x -= a;
	y -= a;
	z -= a;
	return *this;
}

// compound subtraction by a vector on the right
Vector3D Vector3D::operator-=(const Vector3D& rhs)
{
	x -= rhs.x;
	y -= rhs.y;
	z -= rhs.z;
	return *this;
}

// dot product by a vector on the right
double Vector3D::operator.*(const Vector3D& rhs)
{
	return x * rhs. + y * rhs.y + z * rhs.z;
}

// cross product by a vector on the right
Vector3D Vector3D::operator^* (const Vector3D& rhs)
{

}

double    length(void);                      // length of the vector
double    len_squared(void);                 // squared length of the vector
void      normalize(void);                   // normalize the vector
Vector3D& hat(void);                         // normalize the vector and return