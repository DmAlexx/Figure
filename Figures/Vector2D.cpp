#include "Vector2D.hpp"
#include <iostream>

Vector2D::Vector2D(float x_coord, float y_coord)
	: x(x_coord)
	, y(y_coord)
{
}

Vector2D::Vector2D()
{
}

Vector2D& Vector2D::operator=(const Vector2D& right)
{
	x = right.x;
	y = right.y;
	return *this;
}

Vector2D Vector2D::operator+(const Vector2D& right) const
{
	return Vector2D(x + right.x, y + right.y);
}

Vector2D Vector2D::operator-(const Vector2D& right) const
{
	return Vector2D(x - right.x, y - right.y);
}

Vector2D Vector2D::operator*(const Vector2D& right) const
{
	return Vector2D(x * right.x, y * right.y);
}

Vector2D Vector2D::operator*(float value) const
{
	return Vector2D(x * value, y * value);
}

float Vector2D::length() const
{
	return std::sqrt(x * x + y * y);
}

Vector2D& Vector2D::operator+=(const Vector2D& right)
{
	x += right.x;
	y += right.y;
	return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& right)
{
	x -= right.x;
	y -= right.y;
	return *this;
}

Vector2D& Vector2D::operator*=(const Vector2D& right)
{
	x *= right.x;
	y *= right.y;
	return *this;
}

Vector2D& Vector2D::operator*=(float value)
{
	x *= value;
	y *= value;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Vector2D& right)
{
	out << "addr = " << &right << "; x = " << right.x << "; y = " << right.y;
	return out;
}
