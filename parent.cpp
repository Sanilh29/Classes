#include <iostream>
#include "parent.h"

using namespace std;



char* Media::getTitle(){ //we use Media:: because we are using this inside the function struct Media and returning a value
  return title;
}

int Media::getYear(){
  return year;
}



