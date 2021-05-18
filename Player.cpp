#include "Player.h"

Player::~Player()
{
    delete itemList;
}

int Player::getCoins()
{
    return coins;
}

void Player::setCoins(int c)
{
    coins = c;
}
