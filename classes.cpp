//Sanil Hattangadi, December 7th, creates a database of different media such as movies, videogames, and music 
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
  vector<Parent*>*list = new vector<Parent*>; //creates vector
  char command[10];
  bool playing= true;
  while (playing == true){
    cout << "Please input a command: search, add, delete, or quit." << endl;
    cin >> command;
    cin.ignore();
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

void searchItem(vector<Parent*>*list){//doesnt find search input even if its in directory
  char searchtitle[32];
  cout << "Enter the name of the media or the year you wish to search." << endl;
  cin.getline(searchtitle, 32);
  bool founditem = false;
  for (vector<Parent*>::iterator it=(*list).begin(); it !=(*list).end(); ++it){ //go through vector
    if (0== strcmp((*it)->getTitle(), searchtitle) || 0==strcmp((*it)->getYear(), searchtitle)){ //see if the getYEar of getTitle is equal to search
      founditem= true;
      Parent* parent = *it;
      cout << "Title: " << parent->getTitle() << endl;
      cout << "Year: " << parent->getYear() << endl;
      if (parent->getType() == 1){//if its a movie, print this
	Movies* m = (Movies*)parent;
	cout << "Director: " << m->getDirector() << endl;
	cout << "Duration: " << m->getDuration() << endl;
	cout << "Rating: " << m->getRating() << endl;
      }
      if (parent->getType() == 2){//print 
	Videogames* v = (Videogames*)parent;
	cout << "Publisher: " << v->getPublisher() << endl;
	cout << "Rating: " << v->getRating() << endl;
      }
      if (parent->getType() == 3){
	Music* m = (Music*)parent;
	cout << "Publisher: " << m->getPublisher() << endl;
	cout << "Duration: " << m->getDuration() << endl;
	cout << "Artist: " << m->getArtist() << endl;
      }
    }
  }
  if (!founditem){
    cout << "Theres no such media." << endl;
  }
}

void deleteItem(vector<Parent*>*list){//go through array and delte anything with the same title
  char deletetitle[32];
  cout << "Enter the name of the media you wish to delete." << endl;
  cin >> deletetitle;
  //cout << deletetitle << endl;
  cout << "Media Deleted." << endl;
  for (vector<Parent*>::iterator it =(*list).begin(); it !=(*list).end(); ++it){
    if (0 == strcmp((*it)->getTitle(), deletetitle)){
      // cout << deletetitle << endl;
      Parent* parent = *it;
      if (parent->getType() == 1){
	Movies* m = (Movies*)parent;
	delete m;
      }
      if (parent->getType() == 2){
	Videogames* v = (Videogames*)parent;
	delete v;
      }
      if (parent->getType() == 3){
	Music* m = (Music*)parent;
	delete m;
      }   
      (*list).erase(it);
      break;
    }
  }
}

void addItem(vector<Parent*>*list){//add an item to the vector either a movie, music, or videogame
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
