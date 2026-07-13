#include "mat2.h"

//// Constructors

// Default constructor
mat2::mat2() :	m{
	1.0f, 0.0f,
	0.0f, 1.0f
} {}

// Constructor with 4 values
mat2::mat2(
	float x0, float y0,
	float x1, float y1
)
{
	m[0] = x0, m[1] = y0,
	m[2] = x1, m[3] = y1;
}



// Returns the value at the specified position
float mat2::getValue(int row, int col) const
{
	return m[row * cols + col];
}

// Changes the value at the specified position
void mat2::setValue(int row, int col, float value)
{
	m[row * cols + col] = value;
}



// Matrix multiplication
mat2 mat2::matmul(const mat2& other) const
{
	mat2 result;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			result.m[i * cols + j] =
			m[i * cols + 0] * other.m[0 * cols + j] +
			m[i * cols + 1] * other.m[1 * cols + j];
		}
	}
	return result;
}

// Matrix multiplication operator
mat2 mat2::operator*(const mat2& other) const
{
	return matmul(other);
}



// Transformation of a float vector
vec2 mat2::transform(const vec2& vec) const
{
	return vec2(
		m[0] * vec.x + m[1] * vec.y,
		m[2] * vec.x + m[3] * vec.y
	);
}

// Transformation of a double vector
vec2d mat2::transform(const vec2d& vec) const
{
	return vec2d(
		m[0] * vec.x + m[1] * vec.y,
		m[2] * vec.x + m[3] * vec.y
	);
}

// Float vector transformation operator
vec2 mat2::operator*(const vec2& vec) const
{
	return transform(vec);
}

// Double vector transformation operator
vec2d mat2::operator*(const vec2d& vec) const
{
	return transform(vec);
}



//// Type casting

// Cast to a float pointer
mat2::operator const float* () const
{
	return m;
}