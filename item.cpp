include "item.hpp"
  
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
