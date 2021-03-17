#include<iostream>

using namespace std;

int &ref(){
    static int num=3;
    return num;
}

int* wsk(){
    static int a = 5;
    int *b=&a;
    return &a;
}

int value(){
    return 4;
}

int* tab(){
    static int t[3] {0,1,2};
    return t;
}

int main(){
    int a, *b;
    int *arr;
    a = ref();
    cout << a;
    b=wsk();
    cout << endl << *b;
    a=value();
    cout <<endl <<a << endl;
    arr=tab();
    for (int i = 0; i < 3; i++)
        cout << *(arr+i);
}