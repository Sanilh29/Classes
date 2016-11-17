#ifndef MUSICH_DEFINED
#define MUSICH_DEFINED
#include <iostream>
#include "parent.h"

using namespace std;

class Music: public Parent{
 private:
  char* publisher;
  char* rating;
  int duration;
 public:
  Music();
  char* getPublisher();
  char* getRating();
  int getDuration();
};

#endif
