#ifndef Zad1x_h
#define Zad1x_h

#include<iostream>

extern "C"{
	#include "genMatrix.h"
}

extern "C"{
  void subtract(){
    long int a,b;
    puts("Podaj liczbe a: ");
    scanf(" %ld%*c", &a);
    puts("Podaj liczbe b: ");
    scanf(" %ld%*c", &b);
    printf("wynik odejmowania: %ld\n", (a-b));
  }
}

class Zad1x{
	public:
		void matrix();
		void sub();
		int multiply(int a, int b);
		void print();
		int add(int a, int b);
};

#endif
