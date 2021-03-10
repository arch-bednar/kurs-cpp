#include<iostream>

using namespace std;

namespace nasza{
  int k = 7;

  int add(int a, int b){

    return a+b;
  }

}

using namespace nasza;

int main(){
  cout << "Test" << endl;

  cout << nasza::k << endl;
  cout << k << endl;

  int k = 6;

  cout << k << " " << nasza::k<<endl;

  cout << k+nasza::k << endl;

  cout << nasza::add(k, nasza::k);
  return 0;
}
