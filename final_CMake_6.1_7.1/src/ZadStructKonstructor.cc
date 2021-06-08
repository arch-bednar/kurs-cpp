//5.4
#include<iostream>
#include<string>

using namespace std;

class Dude{
public:
  struct dude{
    string imie;
    string nazwisko;
    int age;
  };
  
  dude sebix;
  dude kolega;
  
  Dude(){
    sebix = {"Sebix", "Seba", 12};
    kolega.imie = "Mati";
    kolega.nazwisko = "Szymczyk";
    kolega.age = 16;
  }
  
  void showDude(dude d){
    cout << d.imie << " " << d.nazwisko << " " << d.age;
  }
};
