//includes variables and methods that relate to videogames

#include <iostream>
#include "parent.h"

using namespace std;

class Videogames: public Parent{
 protected:
  char* publisher;
  char* rating;
 public:
  Videogames();
  virtual ~Videogames();
  char* getPublisher();
  char* getRating();
};
