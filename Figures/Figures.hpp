#pragma once
#include "Vector2D.hpp"
#include <iostream>
#include <vector>



class Figure
{
public:
	enum class FigureType
	{
		TRIANGLE,
		CIRCLE,
		RECTANGLE,
		SQUARE
	};

	virtual FigureType figureType() const = 0;
	virtual float square() const = 0;
	virtual float perimeter() const = 0;
};

//////////////////////////////////////////////////////
// TRIANGLE 
//////////////////////////////////////////////////////

class Triangle : public Figure
{
private:
	Vector2D m_oneTop;
	Vector2D m_secondTop;
	Vector2D m_thirdTop;

public:
	Triangle(const Vector2D& oneTop, const Vector2D& secondTop, const Vector2D& thirdTop);
	~Triangle() = default;
	FigureType figureType() const;
	float square() const override;
	float perimeter() const override;
};

//////////////////////////////////////////////////////
// CIRCLE 
//////////////////////////////////////////////////////

class Circle : public Figure
{
private:
	float m_radius;
	Vector2D m_center;

public:
	Circle(const Vector2D& center, float radius);
	~Circle() = default;
	Figure::FigureType figureType() const;
	float square() const override;
	float perimeter() const override;
};

//////////////////////////////////////////////////////
// RECTANGLE 
//////////////////////////////////////////////////////

class Rectangle : public Figure
{
protected:
	Vector2D m_leftTop;
	float m_width;
	float m_length;

public:
	Rectangle(const Vector2D& leftTop, float width, float length);
	~Rectangle() = default;
	Figure::FigureType figureType() const;
	virtual float square() const override;
	virtual float perimeter() const override;
};

//////////////////////////////////////////////////////
// SQUARE 
//////////////////////////////////////////////////////

class Square : public Rectangle
{
public:
	Square(const Vector2D& leftTop, float width);
	Figure::FigureType figureType() const;
};


