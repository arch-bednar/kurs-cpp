#include<iostream>
#include"Kolo.hpp"
#include"Kwadrat.hpp"

using namespace std;

int main(){
  Kolo k(4);
  k.toString();
  cout << k.Pole() << endl;
  cout << k.Obwod() << endl;

  std::cout << std::endl;

  Kwadrat kw(3,4);
  kw.toString();
  cout << kw.Pole() << endl;
  cout << kw.Obwod() << endl;
}
