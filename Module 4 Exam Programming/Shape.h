#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include<string>

using namespace std;

class Shape
{
protected:
	string name;
	Shape* innerShape;
public:
	Shape();
	Shape(string n, Shape* inner = nullptr);

	virtual~Shape();

	string getName() const;
	Shape* getInnerShape() const;

	virtual string desc() const;

};

//derived class

class Circle :public Shape 
{
public:
	Circle(Shape* inner);

	string desc() const override;
};

//derived class
class Polygon :public Shape
{
private:
	int numSides;

public:
	Polygon(int sides, Shape* inner, string n = "polygon");

	int getNumSides() const;
	void setNumSides(int sides);

	string desc() const override;

};


#endif