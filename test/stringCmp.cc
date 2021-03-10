#include<iostream>
#include<cstring>

using namespace std;

int main(){

    string a,b,c;
    a="string1";
    b="string2";
    c="string3";

    string zdanie = ": jest wiekszy";
    
    (a == b) ? (cout << true) : (cout << false);
    cout << endl;
    (a == a) ? (cout << true) : (cout << false);
    cout << endl;
    (a != b) ? (cout << true) : (cout << false);

    cout << "napis a " <<a<< " imie" << endl;

    (a < b) ? (cout << "b " << b <<zdanie << endl) : (cout <<"a" << a << zdanie << endl);

    return 0;
}