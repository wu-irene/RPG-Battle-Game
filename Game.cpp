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
   player.name = _name;
   player.attackStrength = 50;
   player.defense = 15;
   player.health = 200;
   player.coins = 1000;
   cout << "\"Are you alright " + player.name <<"?\"";
   cout << "You shake your head as your mind returns blank. However, you are very injured. The buildings around you are destroyed and crops are burning." <<endl;
   cout << "The mysterious villager girl looks somber. She explains: \"A dragon has destroyed our small village. You tried defending it off, but you weren't strong enough."
   cout<< "Your twin also has been kidnapped by the dragon. You tried saving her but fell off the dragon's tail to the ground."\"<< endl;
   cout << "You try to remember the events in confusion but fail." <<endl;
   cout << "The girl asks you: \"You are the only hope remaining. Do you want to get stronger to save your sister and our village?" <<endl;
   string option;
   cout <<"Enter Y or N:" <<endl;
   cin >>option;
   while (option != "Y" || option != ||"y" || option != "n" || option != "N")
   {
     cout <<"Invalid option. Enter Y or N: " <<endl;
     cin << option;
   }
   if (option == "Y" || option == "y")
   {
     cout << "\"We are saved!\" The girl exclaims. \"My name is Lilah, I can be your trainer."
     //continue explanation, equips and more
   }
   else if (option = "N" || option == "n")
   {
     cout << "The girl says: \"That's disappointing... Who will save us?\" She wanders off to tend other injured and you are left bleeding out." <<endl;
     cout <<"The game has ended."
     exit();
 }
  return;
}
void store()
{
  int selection = 0;
  cout <<" ______________________________ " <<endl;
  cout <<"|     ====== Store ======      |" <<endl;
  cout <<"|  Coins = $ " << hero.coins <<      "|"<<endl;
  cout <<"|  Options later to be added   |" <<endl;
  cout <<"|______________________________|" <<endl;
  cout << "Enter the number of the item you want to buy: " <<endl;
  cin>> selection;
  while (selection <= 0 || selection >6 ||cin.fail())
  {
    cin.clear();
    cout << "Invalid selection, enter again: " <<endl;
    cin >>selection;
  }
  // check if selection is not sold out
  //if sold out, clear selection, ask again
  //choose item from array, then delete
  //error if gold not enough
}
void train()
{
  cout <<"Welcome to the training grounds, we will assign you to a monster based on your level."
  start_battle();
  cout << "Returning to your home......";
}
void menuInventory
{
  
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
  cout << "You have sucessfully defeated the Great Dragon of the North!"<<end;
  exit();
}
int main()
{
  Player player = new Character;
  game_start();
  // until player is strong enough for final boss, run menu to train
  while (player.exp <= 15000)
  {
    game_menu();
  }

  game_end();
}
