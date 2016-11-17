#include <iostream>
#include "parent.h"

using namespace std;



char* Parent::getTitle(){ //we use Media:: because we are using this inside the function struct Media and returning a value
  return title;
}

int Parent::getYear(){
  return year;
}

int Parent::getType(){
  return type;
}


