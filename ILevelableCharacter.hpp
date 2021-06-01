#ifndef __ILEVELABLECHARACTER_HPP__
#define __ILEVELABLECHARACTER_HPP__
using namespace std;

class ILevelableCharacter
{
public:
    ILevelableCharacter() {}

    ~ILevelableCharacter() {}

    virtual void AddCurrentExp(double exp) = 0;
};

#endif
