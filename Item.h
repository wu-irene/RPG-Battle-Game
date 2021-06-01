#ifndef __ITEM_HPP__
#define __ITEM_HPP__
#include <string>

using namespace std;

class Item
{
private:
    string _name;

protected:
    Item(string name)
    {
        _name = name;
    }

public:
    string GetName() { return _name; }

    virtual double GetPrice() = 0;

    virtual string Info() = 0;
};


#endif 