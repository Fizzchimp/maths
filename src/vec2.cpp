#include "vec2.h"

///// Float vector implementation

//// Constructors

// Default constructor
vec2::vec2(float x, float y) : x(x), y(y) {}



// Calculates the magnitude
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



//// Type casting

// Cast to float pointer
vec2::operator const float* () const
{
	return &x;
}




////// Double vector Implementation

//// Constructors

// Default constructor
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




//// Type casting

// Cast to double pointer
vec2d::operator const double* () const
{
	return &x;
}




////// Other functions

// Dot product
vec2 dotProduct(const vec2& vec_1, const vec2& vec_2)
{
	return vec_1.x * vec_2.x + vec_1.y * vec_2.y;
}

vec2d dotProduct(const vec2d& vec_1, const vec2d& vec_2)
{
	return vec_1.x * vec_2.x + vec_1.y * vec_2.y;
}