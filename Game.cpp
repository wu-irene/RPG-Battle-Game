#include "Character.hpp"
#include "Battle.hpp"
#include <iostream>
#include <string>

using namespace std;

void game_start()
{
  string _name;
  cout << "You wake up to a fiery ablaze sky. Your head hurts as you try to remember what exactly happened to you. A nearby villager starts patching you up." <<endl;
  cout << "She appears tiny and clearly shaken by the turn of events. She asks\"What's your name, hero?"<<endl;
  cout<< "Enter your name: "<endl;
  cin >>name;
  //initiate player stats
  hero.name = _name;
  hero.attackStrength = 50;
  hero.defense = 15;
  hero.health = 200; 
  hero.coins = 1000;
  cout << "\"Are you alright << getName() <<"?\"";
  cout << "You shake your head as your mind returns blank. However, you are very injured." <<endl;

}
void store()
{
  cout <<" ______________________________ " <<endl;
  cout <<"|     ====== Store ======      |" <<endl;
  cout <<"|  Coins = $ " << hero.coins <<      "|"<<endl;
  cout <<" "
}

void game_menu()
{
  int selection = 0;
  cout <<"   ______________________________   "<<endl;
  cout <<"  | =======   Main Menu  ======= |" <<endl;
  cout <<"  | 1. [View] Player Info.       |" <<endl;
  cout <<"  | 2. [View] Inventory.         |" <<endl;
  cout <<"  | 3. [View] Store.             |" <<endl;
  cout <<"  | 4. [Training]                |" <<endl;
  cout <<"  |______________________________|" <<endl;

  cout <<"Enter menu selection(1-4): " <<endl;
  cin >>selection;

  while (selection >5 || selection <0 || cin.fail())
  {
    cin.clear();
    cin.ignore(32767, '\n');
    cout << "Invalid selection, enter again (1-4): ";
    cin>>selection;
  }

  if (selection = 1)
  displayInfo();
  else if (selection = 2)
  menuInventory();
  else if( selection =3)
  store();
  else if(selection =4)
  train();
}
void game_end()
{

}
int main()
{

}
