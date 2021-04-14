#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  char sign = 'X';

  cout << "C++ print :" << sign;
  printf("\nC print %c\n", sign);
  int liczba;

  cout << "Input C++ : "; cin >> liczba;
  puts("Input C "); scanf(" %d%*c", &liczba);

  int* pointer;
  pointer = &liczba;

  cout << "\nPointer C++: " << pointer;
  printf("\nPointer C: %p", pointer);

  cout << "\nPointer value C++: " <<*pointer;
  printf("\nPonter value C: %d", *pointer);
  printf("\nHex C: %x", liczba);
  cout <<"\nHex C++: " << hex << liczba;

  cout << "\ncout stream";
  cerr << "\ncerr stream\n";
  return 0;
}
