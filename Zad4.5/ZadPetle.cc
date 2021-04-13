#include<iostream>

using namespace std;

int main(int argc, char *argv[]){
  int i=0,j=0;

  cout<<"petla while i++"<<endl;
  while(i<100){
    cout<<i++<<endl;
    if(i==90)
      break;
  }

  cout<<endl<<endl<<endl<<"petla while ++i"<<endl;
  
  while(j<100){
    cout<<++j<<endl;
    if(i%2==1)
      continue;
  }

  cout<<"petla do-while"<<endl;
  
  int k=0;
  do{
    cout<<k<<endl;
    ++k;
  }
  while(k<100);


  cout<<endl<<"petla for"<<endl;
  for(int l=0; l<100; l++)
    cout<<l<<endl;
  
}
