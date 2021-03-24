#include<iostream>

using namespace std;

int main(){

    int a = 10;
    *(&a - 1) = 20;
    cout << &a << " " << a << " " << &a -1 << " " << *(&a - 1) <<endl; //do poprzedniego miejsza w pamięci wpisujemy liczbę 20 (ilość miejsc w pamięci może )
    cout << "do poprzedniego miejsca w pamięci wpisujemy liczbę 20" << endl 
        << " (ilość miejsc w pamięci może się różnic w zależności od tego ile dany typ danych zajmuje)" << endl;

    *(&a + 2) = 40; //używamy symbolu amperanda do pozyskania adresu pamięci który następnie zwiększamy o dwa wolne miejsca;
    //następnie używamy symboly dereferencji by dostać się do wartości (użyć jak zmiennej) i przypisać do niej 40
    cout << &a << " " << a << " " << &a + 2 << " " << *(&a + 2) << endl;
    cout << "wpisujemy liczbę 40 dwa miejsca w pamięci z przodu" << endl;

    return 0;
}