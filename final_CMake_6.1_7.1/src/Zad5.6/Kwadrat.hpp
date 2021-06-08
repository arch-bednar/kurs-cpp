#include "Figura.hpp"

class Kwadrat : public Figura{

public:
  int a,b;
  Kwadrat(int a, int b){
    this->a = a;
    this->b = b;
  }

  ~Kwadrat(){}

  double Pole(){
    return this->a*this->b;
  }

  double Obwod(){
    return 2*(this->a+this->b);
  }
};
