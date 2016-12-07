//includes variables and methods that relate to music
#ifndef MUSICH_DEFINED
#define MUSICH_DEFINED
#include <iostream>
#include "parent.h"

using namespace std;

class Music: public Parent{
 protected:
  char* publisher;
  char* artist;
  int duration;
 public:
  Music();
  virtual ~Music();
  char* getPublisher();
  char* getArtist();
  int getDuration();
};

#endif
