#include <iostream>
#include "music.h"

using namespace std;

Music::Music(){
  type = 3;
  publisher = new char[32];
  artist = new char[32];
  cout << "Who's the publisher?" << endl;
  cin.get(publisher,32);
  cin.ignore();
  cout << "How long is the song?" << endl;
  cin >> duration;
  cin.ignore();
  cout << "Who sings the song?" << endl;
  cin.get(artist, 32);
  cin.ignore();
}

Music::~Music(){
  delete publisher;
  delete artist;
  
}

char* Music::getPublisher(){
  return publisher;
}

int Music::getDuration(){
  return duration;
}

char* Music::getArtist(){
  return artist;
}

