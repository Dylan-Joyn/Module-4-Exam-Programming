// Module 4 Exam Programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<ctime>
#include"Class.h"
#include"Hero.h"
#include "Shape.h"


using namespace std;
int main()
{
	srand(static_cast<unsigned>(time(0)));

	Mage* mage = new Mage();
	Warrior* warrior = new Warrior();

	Hero hero1("Matthias", mage);
	Hero hero2("Bobby", warrior);
	hero1.act();
	hero2.act();
	cout<< endl;

	Shape* shape1 = new Circle(new Circle(new Polygon(4, new Shape())));
	Shape* shape2 = new Polygon(5, new Polygon(4, new Polygon(3, new Circle(new Shape))));


	cout << "Shape 1 desc: " << shape1->desc() << endl;
	cout << "Shape 2 desc: " << shape2->desc() << endl;
}



