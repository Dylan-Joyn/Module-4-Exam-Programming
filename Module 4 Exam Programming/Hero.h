#pragma once
#ifndef HERO_H
#define HERO_H

#include "Class.h"
using namespace std;

class Hero
{
private:
	string name;
	Class* heroClass;
public:
	Hero();
	Hero(string n, Class* c);

	string getName() const;
	void setName(string n);

	Class* getClass() const;
	void setClass(Class* c);

	void act() const;


};

#endif