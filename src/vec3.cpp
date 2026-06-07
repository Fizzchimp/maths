#include "vec3.h"

////// Float vector implementation

//// Constructors

// Default Constructor
vec3::vec3(float x, float y, float z) : x(x), y(y), z(z) {}



// Calculates the magnitude
float vec3::magnitude() const
{
	return sqrt(x * x + y * y + z * z);
}

// Calculate the unit vector
vec3 vec3::unitVector() const
{
	return *this / magnitude();
}



// Addition operator
vec3 vec3::operator+(const vec3& other) const
{
	return vec3(x + other.x, y + other.y, z + other.z);
}

// Subtraction operator
vec3 vec3::operator-(const vec3& other) const
{
	return vec3(x - other.x, y - other.y, z - other.z);
}



// Linear multiplication
vec3 vec3::multiply(float scalar) const
{
	return vec3(x * scalar, y * scalar, z * scalar);
}

// Linear multiplication operator
vec3 vec3::operator*(float scalar) const
{
	return multiply(scalar);
}

// Linear division operator
vec3 vec3::operator/(float scalar) const
{
	return multiply(1.0f / scalar);
}



//// Type casting

// Cast to a float pointer
vec3::operator const float*() const
{
	return &x;
}




////// Double vector implementation

//// Constructors

// Default constructor
vec3d::vec3d(double x, double y, double z) : x(x), y(y), z(z) {}



// Calculates the magnitude
double vec3d::magnitude() const
{
	return sqrt(x * x + y * y + z * z);
}

// Calculates the unit vector
vec3d vec3d::unitVector() const
{
	return *this / magnitude();
}



// Addition operator
vec3d vec3d::operator+(const vec3d& other) const
{
	return vec3d(x + other.x, y + other.y, z + other.z);
}

// Subtraction operator
vec3d vec3d::operator-(const vec3d& other) const
{
	return vec3d(x - other.x, y - other.y, z - other.z);
}



// Linear multiplication
vec3d vec3d::multiply(double scalar) const
{
	return vec3d(x * scalar, y * scalar, z * scalar);
}

// Linear multiplication operator
vec3d vec3d::operator*(double scalar) const
{
	return multiply(scalar);
}

// Linear division operator
vec3d vec3d::operator/(double scalar) const
{
	return multiply(1.0 / scalar);
}



//// Type casting

// Cast to a double pointer
vec3d::operator const double*() const
{
	return &x;
}

// Cast to a float vector
vec3d::operator const vec3() const
{
	return vec3((float)x, (float)y, (float)x);
}