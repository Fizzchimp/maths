#pragma once
#include <cmath>

// Forward declaration for conversion methods
class vec4;
class vec4d;



//// Float vector
class vec4
{
public:
	float x;
	float y;
	float z;
    float w;



	//// Constructors

	// Default constructor
	vec4(float x = 0, float y = 0, float z = 0, float w = 0);



	// Calculates the magnitude
	float magnitude() const;

	// Calculates the unit vector
	vec4 unitVector() const;



	// Addition operator
	vec4 operator+(const vec4& other) const;

	// Subtraction operator
	vec4 operator-(const vec4& other) const;



	// Linear multiplication
	vec4 multiply(float scalar) const;

	// Linear multiplication operator
	vec4 operator*(float scalar) const;
	
	// Linear division operator
	vec4 operator/(float scalar) const;



	//// Type casting

	// Cast to a float pointer
	operator const float*() const;
};



//// Double vector
class vec4d
{
public:
	double x;
	double y;
	double z;
    double w;


	
	//// Constructors

	// Default constructor
	vec4d(double x = 0, double y = 0, double z = 0, double w = 0);


	// Calculates the magnitude
	double magnitude() const;

	// Calculates the unit vector
	vec4d unitVector() const;



	// Addition operator
	vec4d operator+(const vec4d& other) const;

	// Subtraction operator
	vec4d operator-(const vec4d& other) const;



	// Linear multiplication
	vec4d multiply(double scalar) const;

	// Linear multiplication operator
	vec4d operator*(double scalar) const;

	// Linear Division operator
	vec4d operator/(double scalar) const;



	//// Type casting

	// Cast to a double pointer
	operator const double* () const;

	// Cast to a float vector
	operator const vec4() const;
};