#include<iostream>
#include<cstring>
using namespace std;
void a();
void b();
string c();

string x;

int main(){
  a();

  cout << endl;
  
  b();

  cout << c();
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
