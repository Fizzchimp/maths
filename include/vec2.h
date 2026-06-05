#pragma once
#include <cmath>

// Forward declaration for conversion methods
class vec2;
class vec2d;

// Float vector
class vec2
{
public:
	float x;
	float y;

	// Constructors
	vec2(float x = 0, float y = 0);

	// Calculates the magnitude
	float magnitude() const;

	// Calculates the unit vector
	vec2 unitVector() const;

	// Calculates the tangent vector (unit vector perpendicular to origional vector)
	vec2 tangentVector() const;

	// Addition operator
	vec2 operator+(const vec2& other) const;

	// Subtraction operator
	vec2 operator-(const vec2& other) const;


	// Linear multiplication operator
	vec2 multiply(float scalar) const;

	vec2 operator*(float scalar) const;

	//vec2d operator*(double scalar) const

	// Linear division operator
	vec2 operator/(double scalar) const;

	vec2 operator/(vec2 vec) const;

	// Type casting
	operator const float* () const;

	// Method to return a vec2d with the same values
	vec2d convertToDouble() const;

	// TODO: Why isnt this working?
	// operator const vec2d() const;
};




// Double vector
class vec2d
{
public:
	double x;
	double y;

	// Constructors
	vec2d(double x = 0, double y = 0);


	// Calculates the magnitude
	double magnitude() const;

	// Calculates the unit vector
	vec2d unitVector() const;

	// Calculates the tangent vector (unit vector perpendicular to origional vector)
	vec2d tangentVector() const;

	// Addition operator
	vec2d operator+(const vec2d& other) const;

	// vec2d operator+(const vec2& other) const;

	// Subtraction operator
	vec2d operator-(const vec2d& other) const;

	//vec2d operator-(const vec2& other) const;

	// Linear multiplication operator
	vec2d multiply(double scalar) const;

	vec2d operator*(double scalar) const;

	// Linear division operator
	vec2d operator/(double scalar) const;

	// Type casting
	operator const double* () const;

	// operator const vec2() const;
};




//// Other functions

// Dot product 
vec2 dotProduct(const vec2& vec_1, const vec2& vec_2);
vec2d dotProduct(const vec2d& vec_1, const vec2d& vec_2);
