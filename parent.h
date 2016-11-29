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
  ~Parent();
  char* getTitle();
  int getYear();
  int getType();
};

#endif
