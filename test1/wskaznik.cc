#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}



int main(){
    int *a, *b;
    int x = 1,y = 2;

    a=&x;
    b=&y;
    cout << *a << *b << " " << a << " " << b << endl;
    swap(a,b);
    cout << *a << *b << " " << a << " " << b;
    return 0;
}