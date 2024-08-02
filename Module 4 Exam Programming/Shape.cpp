#include "Shape.h"

Shape::Shape()
	:name("Dot"), innerShape(nullptr) {}

Shape::Shape(string n, Shape* inner)
	:name(n), innerShape(inner) {}

Shape::~Shape()
{
	delete innerShape;
}

string Shape::getName() const
{
	return name;
}

Shape* Shape::getInnerShape() const
{
	return innerShape;
}

string Shape::desc() const
{
	return " a dot";
}

Circle::Circle(Shape* inner)
	:Shape(" circle", inner) {}


string Circle::desc() const
{
	return " a perfect circle surrounding " + (innerShape ? innerShape->desc() : " a dot");

}

Polygon::Polygon(int sides, Shape* inner, string n)
	:Shape(n, inner), numSides(sides) {
	if (numSides == 4) {
		name = "square";
	}
	else if (numSides == 3) {
		name = "triangle";
	}
}

int Polygon::getNumSides() const
{
	return numSides;
}

void Polygon::setNumSides(int sides)
{
	numSides = sides;
}

string Polygon::desc() const
{
	return " a " + to_string(numSides) + " sided " + name + " surrounding " + (innerShape ? innerShape->desc() : " a dot");
}
