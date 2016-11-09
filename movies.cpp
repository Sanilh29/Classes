#include <iostream>
#include "movies.h"

using namespace std;

movies::movies

char* Movies::getDirector(){
  return director;
}

int Movies::getDuration(){
  return duration;
}

int Movies::getRating(){
  return rating;
}
