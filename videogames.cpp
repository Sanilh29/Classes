#include <iostream>
#include "videogames.h"

using namespace std;

Videogames::Videogames(){
  type = 2;
  publisher = new char[32];
  rating = new char [32];
  cout << "Who's the publisher?" << endl;
  cin.get(publisher,30);
  cout << "What is the movie rated?" << endl;
  cin.get(rating, 4);
}

Videogames::~Videogames(){
  delete publisher;
  delete rating;
}

char* Videogames::getPublisher(){
  return publisher;
}

char* Videogames::getRating(){
  return rating;
}
