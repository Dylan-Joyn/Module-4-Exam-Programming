#pragma once
#ifndef CLASS_H
#define CLASS_H
#include <string>
#include <vector>

using namespace std;
class Class
{
protected:
	string name;
public:
	Class();
	Class(string n);
	virtual ~Class();

	string getName() const;
	void setName(string n);

	virtual void attack() const = 0;
};

class Mage : public Class
{
private:
	vector<string> spellbook;

public:
	Mage();
	void castSpell(string spell) const;
	string pickSpell() const;
	virtual void attack() const override;

};

class Warrior :public Class
{
private:
	string weapon;

public:
	Warrior();

	string getWeapon() const;
	void setWeapon(string w);
	void attack() const override;

};

#endif