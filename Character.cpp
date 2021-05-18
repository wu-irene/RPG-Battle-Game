#include "Character.h"
#include <string>
Character::Character(string n, double hp, double p, double a)
{
    healthPoint = hp;
    power = p;
    armor = a;
    name = n;
}

Character::~Character()
{
}

double Character::getHealthPoint()
{
    return healthPoint;
}

double Character::getPower()
{
    return power;
}

double Character::getArmor()
{
    return armor;
}

string Character::getName()
{
    return name;
}

void Character::setHealthPoint(double hp)
{
    healthPoint = hp;
}

void Character::setPower(double p)
{
    power = p;
}

void Character::setArmor(double a)
{
    armor = a;
}

void Character::displayInfo()
{
    cout << name << " " << healthPoint << " " << power << " " << armor << endl;
}
