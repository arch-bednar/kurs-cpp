#include<iostream>

using namespace std;

void pobierzTab(int tab[]){
    for (int i = 0; i <= sizeof(&tab)/sizeof(*(tab+1)); i++){
            cout << tab[i] << endl;
    }
}

int main(){
  int tab[5] = {0,5,2,1,3};
  for (int i = 0; i < sizeof(tab)/sizeof(tab[0]); i++){
    cout << tab[i] << endl;
  }  

  pobierzTab(tab);
}
