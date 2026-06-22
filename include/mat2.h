#pragma once
#include "vec2.h"

class mat2
{
private:
	const int rows = 2;
	const int cols = 2;
	float m[4];
	
public:
	//// Constructors

	// Default constructor
	mat2();
	
	// Constructor with 4 values
	mat2(
		float x0, float y0, 
		float x1, float y1
	);
	


	// Returns the value at the specified position
	float getValue(int row, int col) const;

	// Changes the value at the specified position
	void setValue(int row, int col, float value);



	// Matrix multiplication
	mat2 matmul(const mat2& other) const;

	// Matrix multiplication operator
	mat2 operator*(const mat2& other) const;

	

	// Transformation of a float vector
	vec2 transform(const vec2& vec) const;

	// Transformation of a double vector
	vec2d transform(const vec2d& vec) const;

	// Float vector transformation operator
	vec2 operator*(const vec2& vec) const;

	// Double vector transformation operator
	vec2d operator*(const vec2d& vec) const;



	//// Type casting

	// Cast to a float pointer
	operator const float* () const;
};