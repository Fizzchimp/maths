#pragma once
#include <cmath>


// Float vector
class vec3
{
public:
	float x;
	float y;
	float z;

	// Constructors
	vec3(float x = 0, float y = 0, float z = 0);

	// Returns the magnitude of the vector
	float magnitude() const;


	// Type casting
	operator const float*() const;



	// Addition operator
	vec3 operator+(const vec3& other) const;

	// Subtraction operator
	vec3 operator-(const vec3& other) const;


	// Linear Multiplication operator
	vec3 multiply(float scalar) const;

	vec3 operator*(float scalar) const;
	
	// Linear division
	vec3 operator/(float scalar) const;
};


// Double vector
class vec3d
{
public:
	double x;
	double y;
	double z;

	// Constructors
	vec3d(double x = 0, double y = 0, double z = 0);


	// Type casting
	// Convert to a double array
	operator const double* () const;

	// Convert to a float vector
	operator const vec3() const;



	// Returns the magnitude of the vector
	double magnitude() const;

	// Returns the unit vector
	vec3d unitVector() const;



	// Addition operator
	vec3d operator+(const vec3d& other) const;

	// Subtraction operator
	vec3d operator-(const vec3d& other) const;


	// Linear Multiplication
	vec3d multiply(double scalar) const;

	vec3d operator*(double scalar) const;

	// Linear Division
	vec3d operator/(double scalar) const;
};