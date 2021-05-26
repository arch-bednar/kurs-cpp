#include "Figura.hpp"

class Kolo : public Figura{

public:
  int r;

  Kolo(int r){
    this->r = r;
  }

  double Obwod(){
    return 2*r*3.14;
  }

  double Pole(){
    return r * 3.14* 3.14;
  }
};
