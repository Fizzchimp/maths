#include "vec2.h"

vec2::vec2(float x, float y) : x(x), y(y) {}

vec2::operator const float* () const
{
	return &x;
}

float vec2::magnitude() const
{
	return sqrt(x * x + y * y);
}

vec2 vec2::operator+(const vec2& other) const
{
	return vec2(x + other.x, y + other.y);
}

vec2 vec2::operator-(const vec2& other) const
{
	return vec2(x - other.x, y - other.y);
}

vec2 vec2::multiply(float scalar) const
{
		return vec2(x * scalar, y * scalar);
}

vec2 vec2::operator*(float scalar) const
{
	return multiply(scalar);
}

vec2 vec2::operator/(double scalar) const
{
	return multiply(1.0f / scalar);
}

vec2 vec2::operator/(vec2 vec) const
{
	return vec2(x / vec.x, y / vec.y);
}

vec2d vec2::convertToDouble() const
{
	return vec2d((double)x, (double)y);
}

vec2::operator const vec2d() const
{
	return convertToDouble();
}
