#include "mat4.h"
#include <cmath>


//// Constructors

// Default constructor
mat4::mat4() :
	m{
		1.0f, 0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f
	} {}

// Constructor with 16 values
mat4::mat4(
	float x0, float y0, float z0, float w0,
	float x1, float y1, float z1, float w1,
	float x2, float y2, float z2, float w2,
	float x3, float y3, float z3, float w3
) : 
	m{
		x0, y0, z0, w0,
		x1, y1, z1, w1,
		x2, y2, z2, w2,
		x3, y3, z3, w3
	} {}



// Returns the value at the specified position
float mat4::getValue(int row, int col) const
{
	return m[row * cols + col];
}

// Changes the value at the specified position
void mat4::setValue(int row, int col, float value)
{
	m[row * cols + col] = value;
}



// Linear multiplication
mat4 mat4::multiply(float scalar) const
{	
	mat4 result;
	for (int i = 0; i < rows * cols; i++)
	{
		result.m[i] = m[i] * scalar;
	}
	return result;
}

// Linear multiplication operator
mat4 mat4::operator*(float scalar) const
{
	return multiply(scalar);
}



// Matrix multiplication
mat4 mat4::matmul(const mat4& other) const
{
	mat4 result;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			result.m[i * cols + j] =
			m[i * cols + 0] * other.m[0 * cols + j] +
			m[i * cols + 1] * other.m[1 * cols + j] +
			m[i * cols + 2] * other.m[2 * cols + j] +
			m[i * cols + 3] * other.m[3 * cols + j];
		}
	}
	return result;
}

// Matrix multiplication operator
mat4 mat4::operator*(const mat4& other) const
{
	return matmul(other);
}



// Convert to a two by two matrix
mat2 mat4::xy() const
{
	return mat2(
		m[0], m[1],
		m[4], m[5]
	);
}



//// Type casting

// Cast to a float pointer
mat4::operator const float*() const
{
	return m;
}


// Generate a rotation matrix (around the x axis)
mat4 mat4::rotationMatX(float angle)
{
	float c = cos(angle);
	float s = sin(angle);
	return mat4(
		1.0f, 0.0f, 0.0f, 0.0f,
		0.0f, c,   -s,    0.0f,
		0.0f, s,    c,    0.0f,
		0.0f, 0.0f, 0.0f, 1.0f
	);
}

mat4 mat4::rotationMatY(float angle)
{
	float c = cos(angle);
	float s = sin(angle);
	return mat4(
		c,    0.0f, s,    0.0f,
		0.0f, 1.0f, 0.0f, 0.0f,
	   -s,    0.0f, c,    0.0f,
		0.0f, 0.0f, 0.0f, 1.0f
	);
}

mat4 mat4::rotationMatZ(float angle)
{
	float c = cos(angle);
	float s = sin(angle);
	return mat4(
		c,   -s,    0.0f, 0.0f,
		s,    c,    0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f
	);
}