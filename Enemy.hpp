#ifndef __ENEMY_HPP__
#define __ENEMY_HPP__
#include "Character.hpp"
#include <string>

class Enemy :
    public Character
{
public:
    Enemy(string n) : Character(n, 20, 5, 2) { };
    ~Enemy();

    int getCoins();
};

#endif

