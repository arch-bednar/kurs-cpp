#include<iostream>

#pragma once

using namespace std;

class Figura{

public:

  virtual double Pole() = 0;
  virtual double Obwod() = 0;

  void toString(){
    cout << "klasa figura";
  }
};
