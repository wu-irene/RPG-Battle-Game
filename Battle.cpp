#include "Game.cpp"
#include "Character.hpp"
#include "Battle.hpp"
#include <string>
#include <iostream>

Battle::Battle(Enemy enmy, Player plyr)
{
  enemy = enmy;
  player = ply;
}

Battle::start_battle()
{
  cout << enemy.name + " challenges you to a duel!" <<endl;
  attack();

}
Battle::attack()
{
  useItem();
  end_battle();
}
Battle::useItem()
{

}
Battle::end_battle()
{
  if (player.health >= 0)
  {
    victor = enemy.name;
  }
  else
  victor = player.name
  if (victor = enemy.name)
  {
    cout<< "You are defeated by " + victor +". You are returning to the training grounds." <<endl;
  }
  else
  {
    cout << "You have defeated " + enemy.name + "!" <<endl;
  }
  /*
  list enemy drops, exp, coins
  */
}
