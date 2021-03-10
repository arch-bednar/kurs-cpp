#include<iostream>
#include<cstring>

using namespace std;

int main(){
    string mystring = "Kurs C++";
    char mystringChar[20] = "Kurs c++ char";
    char mystringTwo[] {'K','u','r','s',' ', 'c','+','+','d', '\0'};

    cout << mystring << endl;
    cout << mystringChar << endl;
    cout << "D" << mystringTwo << "D" << endl;

    cout << strlen(mystringTwo) << endl;
    cout << strrchr(mystringTwo, 'u');
    //cout << strxfrm(mystringTwo, 3);

    cout  << endl<<strcoll(mystringTwo, mystringChar)<<endl;
    return 0;
}