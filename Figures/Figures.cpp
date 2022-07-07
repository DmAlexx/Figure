#include "Figures.hpp"
#include "Vector2D.hpp"
#include <math.h>
#include <iostream>

namespace
{
	const float PI = 3.14159;
}

//////////////////////////////////////////////////////
// TRIANGLE 
//////////////////////////////////////////////////////

Triangle::Triangle(const Vector2D& oneTop, const Vector2D& secondTop, const Vector2D& thirdTop)
	: m_oneTop(oneTop)
	, m_secondTop(secondTop)
	, m_thirdTop(thirdTop)
{
}

Figure::FigureType Triangle::figureType() const
{
	return Figure::FigureType::TRIANGLE;
}

float Triangle::square() const
{
	float width = 0;
	float length = 0;
	float length1 = 0;
	float p = 0;
	width = abs(sqrt((m_oneTop.x - m_secondTop.x) * (m_oneTop.x - m_secondTop.x) + (m_oneTop.y - m_secondTop.y) * (m_oneTop.y - m_secondTop.y)));
	length = abs(sqrt((m_oneTop.x - m_thirdTop.x) * (m_oneTop.x - m_thirdTop.x) + (m_oneTop.y - m_thirdTop.y) * (m_oneTop.y - m_thirdTop.y)));
	length1 = abs(sqrt((m_secondTop.x - m_thirdTop.x) * (m_secondTop.x - m_thirdTop.x) + (m_secondTop.y - m_thirdTop.y) * (m_secondTop.y - m_thirdTop.y)));
	p = (width + length + length1) / 2;

	return abs(sqrt(p * (p - width) * (p - length) * (p - length1)));
}

float Triangle::perimeter() const
{
	float width = 0;
	float length = 0;
	float length1 = 0;
	width = abs(sqrt((m_oneTop.x - m_secondTop.x) * (m_oneTop.x - m_secondTop.x) + (m_oneTop.y - m_secondTop.y) * (m_oneTop.y - m_secondTop.y)));
	length = abs(sqrt((m_oneTop.x - m_thirdTop.x) * (m_oneTop.x - m_thirdTop.x) + (m_oneTop.y - m_thirdTop.y) * (m_oneTop.y - m_thirdTop.y)));
	length1 = abs(sqrt((m_secondTop.x - m_thirdTop.x) * (m_secondTop.x - m_thirdTop.x) + (m_secondTop.y - m_thirdTop.y) * (m_secondTop.y - m_thirdTop.y)));

	return width + length + length1;
}

//////////////////////////////////////////////////////
// CIRCLE 
//////////////////////////////////////////////////////

Circle::Circle(const Vector2D& center, float radius)
	: m_radius(radius)
	, m_center(center)
{
}

Figure::FigureType Circle::figureType() const
{
	return Figure::FigureType::CIRCLE;
}

float Circle::square() const
{
	return PI * m_radius * m_radius;
}

float Circle::perimeter() const
{
	return 2 * PI * m_radius;
}

//////////////////////////////////////////////////////
// RECTANGLE 
//////////////////////////////////////////////////////

Rectangle::Rectangle(const Vector2D& leftTop, float width, float length)
	: m_leftTop(leftTop)
	, m_width(width)
	, m_length(length)
{
}

Figure::FigureType Rectangle::figureType() const
{
	return Figure::FigureType::RECTANGLE;
}

float Rectangle::square() const
{
	return m_width * m_length;
}

float Rectangle::perimeter() const
{
	return 2 * m_width + 2 * m_length;
}

//////////////////////////////////////////////////////
// SQUARE 
//////////////////////////////////////////////////////

Figure::FigureType Square::figureType() const
{
	return Figure::FigureType::SQUARE;
}

Square::Square(const Vector2D& leftTop, float width)
	: Rectangle(leftTop, width, width)
{
}



