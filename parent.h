#ifndef PARENTH_DEFINED
#define PARENTH_DEFINED
#include <iostream>

using namespace std;

class Parent {
 protected:
  char* title;
  int year;
  int type;
 public:
  Parent();
  virtual ~Parent();
  char* getTitle();
  int getYear();
  int getType();
};

#endif
