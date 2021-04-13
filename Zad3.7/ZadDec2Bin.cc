#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
  unsigned int dec;
  cout << "Podaj liczbę: ";
  cin >> dec;
  cout<<endl;
  string val;
  while(dec!=0){
    val=val+to_string(dec%2);
    dec/=2;
  }

  reverse(val.begin(), val.end());
  cout << val;
  return 0;
}
