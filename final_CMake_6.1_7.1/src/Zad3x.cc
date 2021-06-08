#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include"../include/Zad3x.h"

using namespace std;

void Zad3x::ZadAdresowaniePamieci(){
  int a = 10;
  *(&a - 1) = 20;
  cout << &a << " " << a << " " << &a -1 << " " << *(&a - 1) <<endl; //do poprzedniego miejsza w pamięci wpisujemy liczbę 20 (ilość miejsc w pamięci może )
  cout << "do poprzedniego miejsca w pamięci wpisujemy liczbę 20" << endl 
       << " (ilość miejsc w pamięci może się różnic w zależności od tego ile dany typ danych zajmuje)" << endl;
  
  *(int *)(&a + 2) = 40; //używamy symbolu amperanda do pozyskania adresu pamięci który następnie zwiększamy o dwa wolne miejsca;
  //następnie używamy symboly dereferencji by dostać się do wartości (użyć jak zmiennej) i przypisać do niej 40
  cout << &a << " " << a << " " << &a + 2 << " " << *(&a + 2) << endl;
  cout << "wpisujemy liczbę 40 dwa miejsca w pamięci z przodu" << endl;
}

void Zad3x::ZadArytmetykaWskaznikow(){
  operations();
  perform();
}

void Zad3x::ZadWywolywanieFunkcji(){
  cout << "Funkcje mozna wywolac poprzez przekazanie do maina listy argumentow";
  cout << endl<< "wowczas skladnia maina to main(int argc, char *args[])";
  cout << "Podaj funkcje 1 lub 2: ";
  int choice;
  cin >> choice;
  switch(choice){
  case 1:
    f();
    break;;
  case 2:
    w();
    break;;
  default:
    cout << "wybrano zla funkcje";
    break;;
  }
}

void Zad3x::ZadIq(){
  int tab[] = {11,22,33,44,55}, i = 3, *p, *q;
  
  p = &tab[0] + 3;
  cout << "*p     = " << *p << endl;
  
  p = p - 2;
  cout << "*p     = " << *p << endl;
  
  q = tab;
  cout << "*(q+2) = " << *(q+2) << endl;
  cout << "q[2]   = " << q[2]   << endl;
  
  cout << "q[i]   = " << q[i] << endl;
  cout << "i[q]   = " << i[q] << endl;   //   <-- Proszę to wyjaśnić
  i++;
  cout << "*(i+q)   = " << *(i+q) << endl;
  
  /*   Zadanie 3.2 */
  //	cout << "i[q]   = " << i[q] << endl;      <-- Proszę to wyjaśnić
  //działanie i[q] jest odpowiednikiem działania *(i+q), po prostu została zamieniona kolejność ale działanie zostanie wykonane tak samo
  //jak q[i], czy *(q+i). Efekt byłby ten sam gdyby zastosować i[tab], zostanie wskazanie miejsce pamięci numer i zarezerwowane przez tablicę (wskaźnik)
  
  /*   Zadanie 3.3 */
  //Oddane w innym pliku
}

void Zad3x::operations(){
  int *p;
  int zmienna = 3;
  p = &zmienna;
  cout << p;
  cout << endl << p++;
  cout << endl << ++p;
  //cout << ++*p;
  //cout << ++(*p);
  cout << endl <<*p++;
  cout << endl <<*(p)++;
  cout << endl <<*++p;
  cout << endl <<*(++p) << endl;
  
  cout << endl << endl << "wartosc *p " <<*p << ", zmienna " << zmienna;
}

void Zad3x::perform(){
  int a=0,b=0,c=0;
  int zmienna = 10;
  int *wsk;
  a = zmienna;
  cout << endl <<"adresy: a,b,c: " << &a << " " << &b << " " << &c << endl;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  b = 10;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  wsk = &c;
  *wsk = 20;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  *(&a + 1) = 30;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  *(&c - 2) = 40;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  *( (int*)&a + 1) = 50;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  *(int *)(&a + 2) = 60;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  //*(int*)(&wsk - 1) = 70;
  //cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  wsk = &b;
  *wsk = 70;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  *(&b - 1) = 80;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  *wsk = 90;
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  *(int*)(&wsk - 1) = 70; //wskazuje na b modyfikuje c
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
  *(int*)(&wsk - 2) = 70; //wskazuje na b modyfikuje a
  cout << "a " << a << "\t" << "b " << b << "\t" << "c " << c << endl;
}

void Zad3x::ZadOperatoryPrzypisania(){
  int i=0, j=1, k=2;

  cout<<"i+j: "<<i+j<<", k-j: "<<k-j<<endl;
  
  k=k*j;
  
  k=mulTwo(k);
  cout<<k<<endl;
}

void Zad3x::ZadPriorytetyOperatorow(){
  std::cout<< "2+3-4*5/6=" << 2+3-4*5/6.0<<std::endl;
}

void Zad3x::ZadBin2Dec(){
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
}

void Zad3x::ZadDec2Bin(){
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

}


int Zad3x::mulTwo(int k){
  return k*10;
}

void Zad3x::f(){
  cout << "funkcja f";
}

void Zad3x::w(){
  cout << "funckja w";
}
