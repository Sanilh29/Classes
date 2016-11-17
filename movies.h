#include <iostream>
#include "parent.h"

using namespace std;

class Movies: public Parent{
 private:
  char* director;
  int duration;
  char* rating;
 public:
  Movies();
  char* getDirector();
  int getDuration();
  char* getRating();
};
