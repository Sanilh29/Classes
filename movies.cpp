#include <iostream>
#include "movies.h"


using namespace std;

Movies::Movies(){
  type = 1;
  director = new char[32];
  rating = new char[32];
  cout << "Who's the director?" << endl;
  cin.get(director,30);
  cout << "How long is the movie?" << endl;
  cin >> duration;
  cout << "What is the movie rated?" << endl;
  cin.get(rating, 4);
}

Movies::~Movies(){
  delete director;
  delete rating;
}

char* Movies::getDirector(){
  return director;
}

int Movies::getDuration(){
  return duration;
}

char* Movies::getRating(){
  return rating;
}
