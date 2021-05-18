#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__
#include <string>
#include <iostream>

class Character
{
  public:
	Character(string n, double hp, double power, double armor);
	~Character();

	double getHealthPoint();
	double getPower();
	double getArmor();
	string getName();
	

	void setHealthPoint(double hp);
	void setPower(double p);
	void setArmor(double a);
	void displayInfo();
	
	virtual int getCoins() = 0;

private:
	double healthPoint;
	double power;
	double armor;
	string name;
	int coins;
};

#endif
