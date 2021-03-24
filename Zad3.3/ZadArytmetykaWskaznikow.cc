#include<iostream>

using namespace std;

int main(){
    int *p;
    int zmienna = 3;
    p = &zmienna;
    cout << endl << p++;
    cout << endl << ++p;
    //cout << ++*p;
    //cout << ++(*p);
    cout << endl <<*p++;
    cout << endl <<*(p)++;
    cout << endl <<*++p;
    cout << endl <<*(++p) << endl;

    cout << endl << endl << "wartosc *p " <<*p << ", zmienna " << zmienna;
    return 0;
}