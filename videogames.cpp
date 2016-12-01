#include <iostream>
#include "videogames.h"

using namespace std;

Videogames::Videogames(){
  type = 2;
  publisher = new char[32];
  rating = new char [32];
  cout << "Who's the publisher?" << endl;
  cin.get(publisher,30);
  cin.ignore();
  cout << "What is the videogame rated?" << endl;
  cin.get(rating, 4);
  cin.ignore();
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
