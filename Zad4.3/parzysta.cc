#include<iostream>
using namespace std;
void a();
void b();

int main(){
  a();

  cout << endl;
  
  b();
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
