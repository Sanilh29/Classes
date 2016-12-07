//includes variables and methods that relate to movies
#include <iostream>
#include "parent.h"

using namespace std;

class Movies: public Parent{
 protected:
  char* director;
  int duration;
  char* rating;
 public:
  Movies();
  virtual ~Movies();
  char* getDirector();
  int getDuration();
  char* getRating();
};
