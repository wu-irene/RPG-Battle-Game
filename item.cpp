include "item.hpp"
  
  Item::~Item()
  {
    delete itemList;
  }

  string Item::getItem(){return name;}
  int Item::gettype() { return type; }
  int Item::geteffect() { return effect; }  
  int Item::getprofession() { return profession; }
  int Item::getprice() { return price; }
  void Item::print_list(vector List){
        for( int i = 0; i < List.size(); i++)
    {
      std::cout << (List.at(i)).(name)<<endl;
    }
  }
