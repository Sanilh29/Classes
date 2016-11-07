#include <iostream>

using namespace std;

class Media {
 private:
  char* title;
  int year;
 public:
  char* getTitle();
  int getYear();
};

