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

	// Type casting
	operator const float* () const;

	float magnitude() const;


	// Addition operator
	vec2 operator+(const vec2& other) const;

	// Subtraction operator
	vec2 operator-(const vec2& other) const;


	// Linear Multiplication operator
	vec2 multiply(float scalar) const;

	vec2 operator*(float scalar) const;

	//vec2d operator*(double scalar) const

	// Linear Division
	vec2 operator/(double scalar) const;

	vec2 operator/(vec2 vec) const;

	vec2d convertToDouble() const;

	// TODO: Why isnt this working?
	operator const vec2d() const;
};




// Double vector
class vec2d
{
public:
	double x;
	double y;

	// Constructors
	vec2d(double x = 0, double y = 0);


	// Returns the magnitude
	double magnitude() const;

	// Returns the unit vector
	vec2d unitVector() const;

	vec2d tangentVector() const;

	double dot(const vec2d& other) const;



	// Addition operator
	vec2d operator+(const vec2d& other) const;


	vec2d operator+(const vec2& other) const;

	// Subtraction operator
	vec2d operator-(const vec2d& other) const;

	//vec2d operator-(const vec2& other) const;

	// Linear Multiplication operator
	vec2d multiply(double scalar) const;

	vec2d operator*(double scalar) const;

	// Linear Division
	vec2d operator/(double scalar) const;
	// Linear Division by another vector
	vec2d operator/(vec2d vec) const;


	// Type casting
	operator const double* () const;

	operator const vec2() const;
};

