#pragma once

class Vector3D
{
public:
	double x = y = z = 0;

public:
	Vector3D  (void);                            // default constructor
	Vector3D  (double);                          // constructor
	Vector3D  (double, double, double);      	 // constructor
	Vector3D  (const Vector3D&);                 // copy constructor
	~Vector3D (void);                            // destructor

	Vector3D& operator=(const Vector3D&);        // assignment operator
	Vector3D  operator*(const double);           // multiplication by a double on the right
	Vector3D  operator*(const Vector3D&);        // multiplication by a vector on the right
	Vector3D  operator/(const double);           // division by a double on the right
	Vector3D  operator/(const Vector3D);         // division by a vector on the right
	Vector3D  operator+(const double);           // addition by a double on the right
	Vector3D  operator+(const Vector3D&);        // addition by a vector on the right
	Vector3D& operator+=(const double);          // compound addition by a double on the right
	Vector3D& operator+=(const Vector3D&);       // compound addition by a vector on the right
	Vector3D  operator-(const double);           // subtraction by a double on the right
	Vector3D  operator-(const Vector3D&);        // subtraction by a vector on the right
	Vector3D  operator-=(const double);          // compound subtraction by a double on the right
	Vector3D  operator-=(const Vector3D&);       // compound subtraction by a vector on the right
	double    operator.*(const Vector3D&);       // dot product by a vector on the right
	Vector3D  operator^*(const Vector3D&);       // cross product by a vector on the right

	double    length(void);                      // length of the vector
	double    len_squared(void);                 // squared length of the vector
	void      normalize(void);                   // normalize the vector
	Vector3D& hat(void);                         // normalize the vector and return
};

Vector3D  operator*(const double, const Vector3D&);