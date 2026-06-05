#include "vec2.h"

vec2d::vec2d(double x, double y) : x(x), y(y) {}

double vec2d::magnitude() const
{
	return std::sqrt(x * x + y * y);
}


vec2d vec2d::unitVector() const
{
	return *this / magnitude();
}

vec2d vec2d::tangentVector() const
{
	return vec2d(-y, x).unitVector();
}

double vec2d::dot(const vec2d& other) const
{
	return x * other.x + y * other.y;
}

vec2d vec2d::operator+(const vec2d& other) const
{
	return vec2d(x + other.x, y + other.y);
}

vec2d vec2d::operator+(const vec2& other) const
{
	return vec2d(x + (double)other.x, y + (double)other.y);
}

vec2d vec2d::operator-(const vec2d& other) const
{
	return vec2d(x - other.x, y - other.y);
}


vec2d vec2d::multiply(double scalar) const
{
	return vec2d(x * scalar, y * scalar);
}

vec2d vec2d::operator*(double scalar) const
{
	return multiply(scalar);
}

vec2d vec2d::operator/(double scalar) const
{
	return multiply(1.0 / scalar);
}

vec2d vec2d::operator/(vec2d vec) const
{
	return vec2d(x / vec.x, y / vec.y);
}

vec2d::operator const double* () const
{
	return &x;
}

vec2d::operator const vec2() const
{
	return vec2((float)x, (float)y);
}