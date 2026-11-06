#include "vec4.h"

////// Float vector implementation

//// Constructors

// Default Constructor
vec4::vec4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}



// Calculates the magnitude
float vec4::magnitude() const
{
	return sqrt(x * x + y * y + z * z + w * w);
}

// Calculate the unit vector
vec4 vec4::unitVector() const
{
	return *this / magnitude();
}



// Addition operator
vec4 vec4::operator+(const vec4& other) const
{
	return vec4(x + other.x, y + other.y, z + other.z, w + other.w);
}

// Subtraction operator
vec4 vec4::operator-(const vec4& other) const
{
	return vec4(x - other.x, y - other.y, z - other.z, w - other.w);
}



// Linear multiplication
vec4 vec4::multiply(float scalar) const
{
	return vec4(x * scalar, y * scalar, z * scalar, w * scalar);
}

// Linear multiplication operator
vec4 vec4::operator*(float scalar) const
{
	return multiply(scalar);
}

// Linear division operator
vec4 vec4::operator/(float scalar) const
{
	return multiply(1.0f / scalar);
}



//// Type casting

// Cast to a float pointer
vec4::operator const float*() const
{
	return &x;
}




////// Double vector implementation

//// Constructors

// Default constructor
vec4d::vec4d(double x, double y, double z, double w) : x(x), y(y), z(z), w(w) {}



// Calculates the magnitude
double vec4d::magnitude() const
{
	return sqrt(x * x + y * y + z * z + w * w);
}

// Calculates the unit vector
vec4d vec4d::unitVector() const
{
	return *this / magnitude();
}



// Addition operator
vec4d vec4d::operator+(const vec4d& other) const
{
	return vec4d(x + other.x, y + other.y, z + other.z, w + other.w);
}

// Subtraction operator
vec4d vec4d::operator-(const vec4d& other) const
{
	return vec4d(x - other.x, y - other.y, z - other.z, w - other.w);
}



// Linear multiplication
vec4d vec4d::multiply(double scalar) const
{
	return vec4d(x * scalar, y * scalar, z * scalar, w * scalar);
}

// Linear multiplication operator
vec4d vec4d::operator*(double scalar) const
{
	return multiply(scalar);
}

// Linear division operator
vec4d vec4d::operator/(double scalar) const
{
	return multiply(1.0 / scalar);
}



//// Type casting

// Cast to a double pointer
vec4d::operator const double*() const
{
	return &x;
}

// Cast to a float vector
vec4d::operator const vec4() const
{
	return vec4((float)x, (float)y, (float)z, (float)w);
}