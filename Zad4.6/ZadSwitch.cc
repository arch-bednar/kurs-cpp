#include<iostream>
#include<string>

using namespace std;

int function(string name){
  if(name.compare("Marysia") == 0){
    return 1;
  }
  else if(name.compare("Arkadiusz") == 0){
    return 2;
  }
  else if(name.compare("Andrzej") == 0){
    return 3;
  }
  return 4;
}

int main(){
  string name;
  cout << "Podaj imie: ";
  getline(cin, name);
  cout << "\n";
  int choice = function(name);
  switch(choice){
  case 1:
    cout << "Jesteś Marysia\n";
    break;
  case 2:
    cout << "Za 5 metrow skrec w lewo\n";
    break;
  case 3:
    cout << "Dzieci i owce glosu nie maja\n";
    break;
  default:
    cout << "naura\n";
    break;
  }
  return 0;
}
