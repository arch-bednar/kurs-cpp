#include<iostream>
#include<string>

void p(){
  std::string line;
  std::cout<<"Podaj dowolny napis ";
  std::getline(std::cin, line);
  std::cout << std::endl << line;
}
