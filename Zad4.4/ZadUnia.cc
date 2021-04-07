#include<iostream>

int main(){
  int n=255;
  n = n&128;//& bitowa unia, działa na bitach porównując dwie liczby, && unia logiczna (do warunków)
  std::cout << n;
  return 0;
}
