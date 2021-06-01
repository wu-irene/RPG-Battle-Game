#include "FactoryProducer.h"
using namespace std;


AbstractFactory FactoryProducer::GetFactory(int level)
{
    switch (level)
    {
    case 1:
        return new BasicMonsterFactory();
    default:
        return new ElderMonsterFactory();
    }
}
