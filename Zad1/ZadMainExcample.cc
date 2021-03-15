#include<iostream>
#include<cstring>

using namespace std;

extern void print();
extern int add(int a, int b);
extern "C" {
  #include"genMatrix.c"
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

int multiply(){
  int a,b;
  cout << "Podaj liczbę a: "; cin >> a;
  cout << "Podaj liczbę b: "; cin >> b;
  return a*b;
}

int main(int argc, char *argv[]){

  for (int i=0; i<argc; i++){

    if(strcmp(*(argv+i),"print")==0){
      print();
    }
    else if(strcmp(*(argv+i), "add")==0){
      int a,b;
      cout << "Podaj liczbę a: "; cin >> a;
      cout << "Podaj liczbę b: "; cin >> b;
      
      cout << add(a,b);
      cout << endl;
    }
    else if(strcmp(*(argv+i), "subtract") == 0){
      subtract();
    }
    else if(strcmp(*(argv+i), "multiply") == 0){
      cout << multiply() << endl;
    }
    else if(strcmp(*(argv+i), "generateMatrix") == 0){
      generateMatrix();
    }    
  }
  return 0;
}

