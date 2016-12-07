//creates variables and methods

#ifndef PARENTH_DEFINED
#define PARENTH_DEFINED
#include <iostream>

using namespace std;

class Parent {
 protected:
  char* title;
  char* year;
  int type;
 public:
  Parent();
  virtual ~Parent();
  char* getTitle();
  char* getYear();
  int getType();
};

#endif
