#include "vec3.h"

vec3d::vec3d(double x, double y, double z) : x(x), y(y), z(z) {}

double vec3d::magnitude() const
{
	return sqrt(x * x + y * y + z * z);
}

vec3d vec3d::unitVector() const
{
	return *this / magnitude();
}

vec3d vec3d::operator+(const vec3d& other) const
{
	return vec3d(x + other.x, y + other.y, z + other.z);
}

vec3d vec3d::operator-(const vec3d& other) const
{
	return vec3d(x - other.x, y - other.y, z - other.z);
}

vec3d vec3d::multiply(double scalar) const
{
	return vec3d(x * scalar, y * scalar, z * scalar);
}

vec3d vec3d::operator*(double scalar) const
{
	return multiply(scalar);
}

vec3d vec3d::operator/(double scalar) const
{
	return multiply(1.0 / scalar);
}

vec3d::operator const double*() const
{
	return &x;
}

vec3d::operator const vec3() const
{
	return vec3((float)x, (float)y, (float)x);
}