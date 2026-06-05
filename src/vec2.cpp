#include "vec2.h"

// Constructors
vec2::vec2(float x, float y) : x(x), y(y) {}


// Calculates the agnitude
float vec2::magnitude() const
{
	return sqrt(x * x + y * y);
}

// Calculates the unit vector
vec2 vec2::unitVector() const
{
	return *this / magnitude();
}

// Calculates the tangent vector (unit vector perpendicular to origional vector)
vec2 vec2::tangentVector() const
{
	return vec2(-y, x).unitVector();
}


// Addition operator
vec2 vec2::operator+(const vec2& other) const
{
	return vec2(x + other.x, y + other.y);
}

// Subtraction operator
vec2 vec2::operator-(const vec2& other) const
{
	return vec2(x - other.x, y - other.y);
}


// Linear multiplication
vec2 vec2::multiply(float scalar) const
{
		return vec2(x * scalar, y * scalar);
}

// Linear multiplication operator
vec2 vec2::operator*(float scalar) const
{
	return multiply(scalar);
}

// Linear division operator
vec2 vec2::operator/(double scalar) const
{
	return multiply(1.0f / scalar);
}

// Linear division by another vector
// vec2 vec2::operator/(vec2 vec) const
// {
// 	return vec2(x / vec.x, y / vec.y);
// }


// Return a vec2d with the same values
vec2d vec2::convertToDouble() const
{
	return vec2d((double)x, (double)y);
}

// Type casting
vec2::operator const float* () const
{
	return &x;
}

// TODO: Why isnt this working?
// vec2::operator const vec2d() const
// {
// 	return convertToDouble();
// }






//// Double vector Implementation
// Constructors
vec2d::vec2d(double x, double y) : x(x), y(y) {}


// Calculates the magnitude
double vec2d::magnitude() const
{
	return std::sqrt(x * x + y * y);
}

// Calculates the unit vector
vec2d vec2d::unitVector() const
{
	return *this / magnitude();
}

// Calculates the tangent vector (unit vector perpendicular to origional vector)
vec2d vec2d::tangentVector() const
{
	return vec2d(-y, x).unitVector();
}


// Addition operator
vec2d vec2d::operator+(const vec2d& other) const
{
	return vec2d(x + other.x, y + other.y);
}

// vec2d vec2d::operator+(const vec2& other) const
// {
// 	return vec2d(x + (double)other.x, y + (double)other.y);
// }

// Subtraction operator
vec2d vec2d::operator-(const vec2d& other) const
{
	return vec2d(x - other.x, y - other.y);
}


// Linear multiplication
vec2d vec2d::multiply(double scalar) const
{
	return vec2d(x * scalar, y * scalar);
}

// Linear multiplication operator
vec2d vec2d::operator*(double scalar) const
{
	return multiply(scalar);
}

// Linear division operator
vec2d vec2d::operator/(double scalar) const
{
	return multiply(1.0 / scalar);
}

// Type casting
vec2d::operator const double* () const
{
	return &x;
}

// vec2d::operator const vec2() const
// {
// 	return vec2((float)x, (float)y);
// }




//// Other functions

// Dot product
vec2 dotProduct(const vec2& vec_1, const vec2& vec_2)
{
	return vec_1.x * vec_2.x + vec_1.y * vec_2.y;
}

vec2d dotProduct(const vec2d& vec_1, const vec2d& vec_2)
{
	return vec_1.x * vec_2.x + vec_1.y * vec_2.y;
}