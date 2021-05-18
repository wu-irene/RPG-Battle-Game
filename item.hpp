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
    Item(std::string name, int effect, int type, int profession, int price): name(name), effect(effect), type(type), profession(profession), price(price) {}
    string getItem(){return name;}
    int gettype() { return type; }
    int geteffect() { return effect; }
    int getprofession() { return profession; }
    int getprice() { return price; }
    void print_list(vector List){
        for( int i = 0; i < List.size(); i++)
    {
      std::cout << (List.at(i)).(name)<<endl;
    }
 }
}   
