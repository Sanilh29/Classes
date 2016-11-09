#include <iostream>
#include <vector>
#include "parent.h"

using namespace std;



int main(){
  vector<Media*>*list = new vector<Media*>();
  return 0;
}

void addItem(vector<Media*>*list){
  char command[15];
  cout << "Enter what type of media you want to add to the directory: movie, music, or video." << endl;
  cin >> command;
  if (0 == strcmp(command, "movie")){
    movies* m= new movies();
    }
    if (0==strcmp(command, "music")){
      deleteStudent(list);
    }
    if (0==strcmp(command, "video")){
      printStudent(list);
    }
}
