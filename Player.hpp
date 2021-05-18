#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "Character.h"
#include <string>
class Player :
    public Character
{
public:
    Player(string n) : Character(n, 100, 100, 50) {
        coins = 100;
        itemList = new Vector();
    };

    ~Player();

    int getCoins();
    void setCoins(int c);
private:
    int coins;
    vector<Items*> itemList;
};
