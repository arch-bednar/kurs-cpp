#include<iostream>

using namespace std;

void pobierzTab(int tab[]){
    for (int i = 0; i <= sizeof(&tab)/sizeof(tab[0]); i++){
        cout << tab[i] << endl;
    }
}

int main(){
    int tab[3] = {0,5,2};
    pobierzTab(tab);
}