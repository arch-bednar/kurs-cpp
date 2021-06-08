#include<iostream>
#include"Kolo.hpp"
#include"Kwadrat.hpp"
#include"Rzad.hpp"
using namespace std;

void wywolajAbstract(){
  Kolo k(4);
  k.toString();
  cout << k.Pole() << endl;
  cout << k.Obwod() << endl;

  std::cout << std::endl;

  Kwadrat kw(3,4);
  kw.toString();
  cout << kw.Pole() << endl;
  cout << kw.Obwod() << endl;

  Rzad r;
  cout << "Obywatele mają powierzchnię okręgu o promieniu: ";
  r.ileMetrow();
}
