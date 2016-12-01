#include <iostream>
#include <vector>
#include <cstring>
#include "parent.h"
#include "movies.h"
#include "music.h"
#include "videogames.h"

using namespace std;

void searchItem(vector<Parent*>*list);
void deleteItem(vector<Parent*>*list);
void addItem(vector<Parent*>*list);

int main(){
  vector<Parent*>*list = new vector<Parent*>;
  char command[10];
  bool playing= true;
  while (playing == true){
    cout << "Please input a command: search, add, delete, or quit." << endl;
    cin >> command;
    cout << command << endl;
    if (0 == strcmp(command, "search")){
      searchItem(list);
    }
    if (0 == strcmp(command, "add")){
      addItem(list);
    }
    if (0 == strcmp(command, "delete")){
      deleteItem(list);
    }
    if (0 == strcmp(command, "quit")){
      playing = false;
    }
  }
}

void searchItem(vector<Parent*>*list){

}

void deleteItem(vector<Parent*>*list){
  char deletetitle[32];
  cout << "Enter the name of the media you wish to delete." << endl;
  cin >> deletetitle;
  cout << deletetitle << endl;
  cout << "Media Deleted." << endl;
  for (vector<Parent*>::iterator it =(*list).begin(); it !=(*list).end(); ++it){
    if (0 == strcmp((*it)->getTitle(), deletetitle)){
      cout << deletetitle << endl;
      delete (*it);
      (*list).erase(it);
      break;
    }
  }
}

void addItem(vector<Parent*>*list){
  char command[15];
  cout << "Enter what type of media you want to add to the directory: movie, music, or videogames." << endl;
  cin >> command;
  cin.ignore();
  if (0 == strcmp(command, "movie")){
    Movies* m= new Movies();
    list -> push_back(m);
    }
  if (0==strcmp(command, "music")){
    Music* c = new Music();
    list -> push_back(c);
    }
  if (0==strcmp(command, "videogames")){
    Videogames* v = new Videogames();
    list -> push_back(v);
    }
}
