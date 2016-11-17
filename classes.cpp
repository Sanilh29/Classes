#include <iostream>
#include <vector>
#include <cstring>
#include "parent.h"
#include "movies.h"
#include "music.h"
#include "videogames.h"

using namespace std;



int main(){
  vector<Parent*>*list = new vector<Parent*>;
  return 0;
}

void addItem(vector<Parent*>*list){
  char command[15];
  cout << "Enter what type of media you want to add to the directory: movie, music, or video." << endl;
  cin >> command;
  if (0 == strcmp(command, "movie")){
    Movies* m= new Movies();
    }
    if (0==strcmp(command, "music")){
      Videogames* v = new Videogames();
    }
    if (0==strcmp(command, "video")){
      Music* c = new Music();
    }
}
