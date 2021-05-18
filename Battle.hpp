#ifndef __BATTLE_HPP__
#define __BATTLE_HPP__
#include "Character.hpp"
#include "Enemy.hpp"
#include <string>

class Battle{
private:
    bool turn = true;
    bool defending = false;
    bool end = false;

public:
  Battle (Enemy enm, Player ply);
  void start_battle();
  void end_battle();
  void attack();
  void useItem();
};
#endif
