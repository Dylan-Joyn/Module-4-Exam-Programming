#include "Hero.h"
#include <iostream>
using namespace std;

Hero::Hero() :
	name(""), heroClass(nullptr) {}

Hero::Hero(string n, Class* c) :
	name(n), heroClass(c) {}

string Hero::getName() const {
	return name;

}

void Hero::setName(string n) {
	name = n;
}

Class* Hero::getClass() const {
	return heroClass;

}

void Hero::setClass(Class* c) {
	heroClass = c;

}

void Hero::act() const {
	if (heroClass) {
		cout << name << " ";
		heroClass->attack();
	}
}