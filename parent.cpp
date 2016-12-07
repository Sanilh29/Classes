//parent clas, contains all the variable wchich are siilar between all the variables
#include <iostream>
#include "parent.h"

using namespace std;
Parent::Parent(){
  title = new char[32];
  year = new char[32];
  cout << "What's the title?" << endl;
  cin.get(title,32);
  cin.ignore();
  //cout << title << endl;
  cout << "What's the year?" << endl;
  cin.get(year,32);
  cin.ignore();
}

Parent:: ~Parent(){
  delete title;
}

char* Parent::getTitle(){ //we use Media:: because we are using this inside the function struct Media and returning a value
  return title;
}
char* Parent::getYear(){
  return year;
}

int Parent::getType(){
    return type;
}


