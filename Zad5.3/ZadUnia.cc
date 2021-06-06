#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;


union stat{
  char student;
  int index;
  double srednia;
};

int main(){

  //status NWM = {"Kowalski", 2135, 4.5}; error: too many initializers
  stat imie;

  imie.student = 'c';
  cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;
  imie.index = 53124;
  cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;
  imie.srednia = 6.0;
  cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;

  return 0;
}
