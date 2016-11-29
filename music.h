#ifndef MUSICH_DEFINED
#define MUSICH_DEFINED
#include <iostream>
#include "parent.h"

using namespace std;

class Music: public Parent{
 private:
  char* publisher;
  char* artist;
  int duration;
 public:
  Music();
  ~Music();
  char* getPublisher();
  char* getArtist();
  int getDuration();
};

#endif
