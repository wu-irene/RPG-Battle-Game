#ifndef _FACTORYPRODUCER_
#define _FACTORYPRODUCER_
#include "AbstractFactory.h"
#include "BasicMonsterFactory.h"
#include "ElderMonsterFactory.h"

using namespace std;

class FactoryProducer
{
    public:
    string MonsterList = {"godzilla"}; 
    AbstractFactory GetFactory(int level);
};

#endif _FACTORYPRODUCUER_

