#pragma once
#include <iostream>

class Vector2D
{
private:

public:
	float x = 0;
	float y = 0;

public:
	Vector2D(float x_coord, float y_coord);
	Vector2D();
	~Vector2D() = default;
	Vector2D& operator=(const Vector2D& right);
	Vector2D operator+(const Vector2D& right) const;
	Vector2D operator-(const Vector2D& right) const;
	Vector2D operator*(const Vector2D& right) const;
	Vector2D operator*(float value) const;
	Vector2D& operator+=(const Vector2D& right);
	Vector2D& operator-=(const Vector2D& right);
	Vector2D& operator*=(const Vector2D& right);
	Vector2D& operator*=(float value);
	friend std::ostream& operator<<(std::ostream& cout, const Vector2D& right);
	float length() const;
};
