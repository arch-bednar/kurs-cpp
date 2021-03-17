#include<iostream>

using namespace std;

int referencja(int &a);
int wskaznik(int a);
int wskaznik(int *a);
int wartosc(int a);

int main(int argc, char *argv[]){
    
    int value = 4;
    int *valueWsk = &value;
    int * valueWsk1;
    int &valueRef = value;
    valueWsk1 = &value;

    cout << *valueWsk << endl << *valueWsk1;
    value = 5;

    cout << endl <<*valueWsk << endl << *valueWsk1;

    cout << endl << referencja(valueRef);

    cout << endl << value;

    cout << endl << wskaznik(*valueWsk1);

    cout << endl << wskaznik(valueWsk);

    cout << endl << *valueWsk1 << *valueWsk;

    cout << endl << wartosc(value);
}

int referencja(int &a){
    return a++;
}

int wskaznik(int a){
    return ++a;
}

int wskaznik(int *a){
    return *(a++);
}

int wartosc(int a){
    return --a;
}

int tablica(){
    return 3;
}