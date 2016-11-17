#include <iostream>
#include "videogames.h"

using namespace std;

Videogames::Videogames(){
  type = 2;
  cout << "Who's the publisher?" << endl;
  cin.get(publisher,30);
  cout << "What is the movie rated?" << endl;
  cin.get(rating, 4);
}

char* Videogames::getPublisher(){
  return publisher;
}

char* Videogames::getRating(){
  return rating;
}
