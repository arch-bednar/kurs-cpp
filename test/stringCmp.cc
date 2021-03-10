#include<iostream>
#include<cstring>

using namespace std;

int main(){

    string a,b,c;
    a="string1";
    b="string2";
    c="string3";

    (a == b) ? (cout << true) : (cout << false);
    cout << endl;
    (a == a) ? (cout << true) : (cout << false);
    cout << endl;
    (a != b) ? (cout << true) : (cout << false);

    cout << "napis a " <<a<< " imie";
    return 0;
}