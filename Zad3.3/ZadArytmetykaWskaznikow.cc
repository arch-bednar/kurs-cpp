#include<iostream>

using namespace std;
void operations();
void perform();

int main(){
    operations();
    perform();
    return 0;
}

void operations(){
    int *p;
    int zmienna = 3;
    p = &zmienna;
    cout << p;
    cout << endl << p++;
    cout << endl << ++p;
    //cout << ++*p;
    //cout << ++(*p);
    cout << endl <<*p++;
    cout << endl <<*(p)++;
    cout << endl <<*++p;
    cout << endl <<*(++p) << endl;

    cout << endl << endl << "wartosc *p " <<*p << ", zmienna " << zmienna;
}

void perform(){
    int a=0,b=0,c=0;
    int zmienna = 10;
    int *wsk;
    a = zmienna;
    cout << endl <<"adresy: a,b,c: " << &a << " " << &b << " " << &c << endl;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    b = 10;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    wsk = &c;
    *wsk = 20;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    *(&a + 1) = 30;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    *(&c - 2) = 40;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    *( (int*)&a + 1) = 50;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    *(int *)(&a + 2) = 60;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    //*(int*)(&wsk - 1) = 70;
    //cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    wsk = &b;
    *wsk = 70;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    *(&b - 1) = 80;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    *wsk = 90;
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    *(int*)(&wsk - 1) = 70; //wskazuje na b modyfikuje c
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
    *(int*)(&wsk - 2) = 70; //wskazuje na b modyfikuje a
    cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
}