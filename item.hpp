#ifndef __ITEM_HPP__
#define __ITEM_HPP__

#include "character.hpp"
#include <string>
#include <vector>
#include <iostream>

class Item {
private:
    std::string name; 
    int effect; 
    int type; 
    int profession;
    int price;
    int itemType;
    vector <Character*> ItemList;
    vector <Character*> WeaponList;
    vector <Character*> ShopList;
public:
    ~Item();
    Item(std::string name, int effect, int type, int profession, int price): name(name), effect(effect), type(type), profession(profession), price(price) {};
    string getItem();
    int gettype();
    int geteffect();
    int getprofession();
    int getprice();
    void print_list(vector List);
};
#endif
