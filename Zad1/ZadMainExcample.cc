#include<iostream>
#include<cstring>

extern void p();
extern int add(int a, int b);
extern "C" {
  #include"genMatrix.c"
}

using namespace std;

int main(int argc, char *argv[]){

  for (int i=0; i<argc; i++){

    if(strcmp(*(argv+i),"print")==0)
      p();
    else if(strcmp(*(argv+i), "add")==0){
      int a,b;
      cout << "Podaj liczbę a: "; cin >> a;
      cout << "Podaj liczbę b: "; cin >> b;
      
      cout << add(a,b);
      cout << endl;
    }
    else if(strcmp(*(argv+i), "generateMatrix") == 0){
      generateMatrix();
    }    
  }
  return 0;
}

