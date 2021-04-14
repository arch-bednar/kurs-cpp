#include<iostream>
#include<cstring>
using namespace std;
void a();
void b();
string c();

string x;

int main(){
  int fun;
  cout <<"Podaj liczbę 1-3 "; cin >> fun;
  switch(fun){
  case 1:
    a();
    break;
  case 2:
    b();
    break;
  case 3:
    c();
    break;
  default:
    cout<<"Nie ma takiej funkcji";
  }
  return 0;
}

void b(){
  int num=255;
  (num%2) ? (cout << "nieparzysta") : (cout << "parzysta");
}

void a(){
  int num=255;
  (num&1) ? (cout << "nieparzysta") : (cout<< "parzysta");
}

string c(){
  int x;
  cout << "Podaj liczbę: ";
  cin >> x;

  switch(x){
  case 1:
  case 2:
  case 3:
    return "1-3";
  default:
    return "różne od 1-3";
  }
}
