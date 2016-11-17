#include <iostream>
#include "music.h"

using namespace std;

Music::Music(){
  type = 3;
  cout << "Who's the publisher?" << endl;
  cin.get(publisher,30);
  cout << "How long is the movie?" << endl;
  cin >> duration;
  cout << "What is the movie rated?" << endl;
  cin.get(rating, 4);
}

char* Music::getPublisher(){
  return publisher;
}

int Music::getDuration(){
  return duration;
}

char* Music::getRating(){
  return rating;
}

