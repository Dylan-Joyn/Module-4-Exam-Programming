#include "Class.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

Class::Class() : name("") {}

Class::Class(string n) : name(n) {}

Class::~Class() {}

string Class::getName() const {
	return name;

}

void Class::setName(string n) {
	name = n;
}

//derived class

Mage::Mage() :Class("the Mage "), 
spellbook({ "Guiding Bolt", "Inflict Wounds","Smite" }) {}

void Mage::castSpell(string spell)const {
	cout << "casts " << spell << endl;

}

string Mage::pickSpell() const {
	if (spellbook.empty())return"";
	int index = rand() % spellbook.size();
	return spellbook[index];
}

void Mage::attack() const {
	string spell = pickSpell();
	cout << name;
	castSpell(spell);
}

//derived class

Warrior::Warrior() :Class("the Warrior"),
weapon("Great Axe") {}

string Warrior::getWeapon() const {
	return weapon;

}

void Warrior::attack() const {
	cout << name << " swings their " << weapon << endl;
}