#ifndef Zad1xC_h
#define Zad1xC_h

#include<iostream>
#include<string>
#include "../include/Zad1x.h"


int Zad1x::add(int a, int b){
	return a+b;
}

int Zad1x::multiply(int a, int b){
	return a*b;
}

void Zad1x::matrix(){
	generateMatrix();
}

void Zad1x::print(){
	std::string line;
  	std::cout<<"Podaj dowolny napis ";
  	std::getline(std::cin, line);
  	std::cout << std::endl << line;
}

void Zad1x::sub(){
	subtract();
}

#endif
