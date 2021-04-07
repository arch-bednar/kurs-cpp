#include<iostream>

using namespace std;

int main(){
  int n=255;
  n = n&128;//& bitowa unia, działa na bitach porównując dwie liczby, && unia logiczna (do warunków)
  std::cout << n << endl;
  int w = -1;
  cout << (w&13) << endl; //w przypadku liczby dodatniej i ujemnej wyjdzie nam liczba dodatnia
  //w cout musimy operację bitową w&13 podać w nawiasie, inaczej program sie wysypie

  char a = 'a';
  cout <<(int)a<< ' ' << (a&97)<<endl;
  return 0;
}
