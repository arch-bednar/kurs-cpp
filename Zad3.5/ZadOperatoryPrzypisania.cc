#include<iostream>

using namespace std;

int mulTwo(int k);

int main(){
  int i=0, j=1, k=2;

  cout<<"i+j: "<<i+j<<", k-j: "<<k-j<<endl;

  k=k*j;

  k=mulTwo(k);
  cout<<k<<endl;
  return 0;
}

int mulTwo(int k){
  return k*10;
}
