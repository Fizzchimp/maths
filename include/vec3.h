#pragma once
#include <cmath>

// Forward declaration for conversion methods
class vec3;
class vec3d;



//// Float vector
class vec3
{
public:
	float x;
	float y;
	float z;



	//// Constructors

	// Default constructor
	vec3(float x = 0, float y = 0, float z = 0);



	// Calculates the magnitude
	float magnitude() const;

	// Calculates the unit vector
	vec3 unitVector() const;



	// Addition operator
	vec3 operator+(const vec3& other) const;

	// Subtraction operator
	vec3 operator-(const vec3& other) const;



	// Linear multiplication
	vec3 multiply(float scalar) const;

	// Linear multiplication operator
	vec3 operator*(float scalar) const;
	
	// Linear division operator
	vec3 operator/(float scalar) const;



	//// Type casting

	// Cast to a float pointer
	operator const float*() const;
};



//// Double vector
class vec3d
{
public:
	double x;
	double y;
	double z;


	
	//// Constructors

	// Default constructor
	vec3d(double x = 0, double y = 0, double z = 0);


	// Calculates the magnitude
	double magnitude() const;

	// Calculates the unit vector
	vec3d unitVector() const;



	// Addition operator
	vec3d operator+(const vec3d& other) const;

	// Subtraction operator
	vec3d operator-(const vec3d& other) const;



	// Linear multiplication
	vec3d multiply(double scalar) const;

	// Linear multiplication operator
	vec3d operator*(double scalar) const;

	// Linear Division operator
	vec3d operator/(double scalar) const;



	//// Type casting

	// Cast to a double pointer
	operator const double* () const;

	// Cast to a float vector
	operator const vec3() const;
};