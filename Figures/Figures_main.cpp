#include "Figures.hpp"
#include "Vector2D.hpp"
#include <vector>
#include <memory>
#include <iostream>
#include <map>

using FigurePtr = std::shared_ptr<Figure>;
using FiguresList = std::vector<FigurePtr>;

namespace
{
	std::map<Figure::FigureType, std::string> FigureNames{
	  {Figure::FigureType::TRIANGLE, "Triangle"},
	  {Figure::FigureType::CIRCLE, "Circle"},
	  {Figure::FigureType::RECTANGLE, "Rectangle"},
	  {Figure::FigureType::SQUARE, "Square"},
	};
}


int main()
{
	FiguresList figures;
	figures.push_back(FigurePtr(new Circle(Vector2D(0, 0), 10)));
	figures.push_back(FigurePtr(new Triangle(Vector2D(0, 0), Vector2D(1, 5), Vector2D(5, 1))));
	figures.push_back(FigurePtr(new Rectangle(Vector2D(0, 0), 10, 15)));
	figures.push_back(FigurePtr(new Square(Vector2D(10, 11), 10)));

	for (const auto& figure : figures)
	{
		std::cout << FigureNames.at(figure->figureType()) << ";" << "  square = " << figure->square() << ";  perimeter = " << figure->perimeter() << std::endl;
	}

	return 0;
}