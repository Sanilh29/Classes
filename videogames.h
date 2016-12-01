#include <iostream>
#include "parent.h"

using namespace std;

class Videogames: public Parent{
 private:
  char* publisher;
  char* rating;
 public:
  Videogames();
  virtual ~Videogames();
  char* getPublisher();
  char* getRating();
};
