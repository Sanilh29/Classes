#include <iostream>

using namespace std;

class Movies {
 private:
  char* director;
  int duration;
  int rating;
 public:
  char* getDirector();
  int getDuration();
  int getRating();
}
