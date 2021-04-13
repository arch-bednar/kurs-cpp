#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
  unsigned int num=0;
  string bin;
  cout << "Podaj liczbę binarną (w formacie xxxxxxx): ";
  getline(cin, bin);
  for(int i=bin.length()-1; i>=0; i--){
    if(bin[i] == '1'){
      num=num + 1*pow(2,i);
    }
  }
  cout<<endl<<num<<endl;
  return 0;
}
