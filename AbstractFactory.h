#ifndef __ABSTRACTFACTORY_HPP__
#define __ABSTRACTFACTORY_HPP__
#include "IBattalableCharacter.h"
#include <string>
using namespace std;

class AbstractFactory
{
public:
	virtual IBattalableCharacter GetMonster(string type) = 0;
};

#endif
