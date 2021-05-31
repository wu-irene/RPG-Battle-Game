#ifndef __ISHOPPABLECHARACTER_HPP__
#define __ISHOPPABLECHARACTER_HPP__
#include <string>
using namespace std;

class IshoppableCharacter
{
public:
    ~IshoppableCharacter() {}

    virtual double GetCurrency() = 0;

    virtual int GetLevel() = 0;

    virtual void AddCurrency(double currency) = 0;

    virtual void SpendCurrency(double currency) = 0;

    virtual string Info() = 0;
};

#endif
