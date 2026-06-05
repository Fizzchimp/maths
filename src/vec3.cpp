#include "vec3.h"

vec3::vec3(float x, float y, float z) : x(x), y(y), z(z) {}


float vec3::magnitude() const
{
	return sqrt(x * x + y * y + z * z);
}

vec3::operator const float*() const
{
	return &x;
}

vec3 vec3::operator+(const vec3& other) const
{
	return vec3(x + other.x, y + other.y, z + other.z);
}

vec3 vec3::operator-(const vec3& other) const
{
	return vec3(x - other.x, y - other.y, z - other.z);
}

vec3 vec3::multiply(float scalar) const
{
	return vec3(x * scalar, y * scalar, z * scalar);
}

vec3 vec3::operator*(float scalar) const
{
	return multiply(scalar);
}

vec3 vec3::operator/(float scalar) const
{
	return multiply(1.0f / scalar);
}
