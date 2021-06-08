#include<iostream>
#include<string>
//5.2
using namespace std;

struct czarodziej{
	string imie;
	string nazwisko;
	int wiek;
};

class Structure{
public:
  
  struct czarodziej{
    string imie;
    string nazwisko;
    int wiek;
  };
  
  czarodziej harryPotter = {"Harry", "Potter", 11};
  czarodziej Ron;

  Structure(){
    Ron.imie = "Ron";
    Ron.nazwisko = "Weasley";
    Ron.wiek = 11;
  }
  
  void wypiszCzarodzieja(czarodziej cz){
    cout << cz.imie << " " << cz.nazwisko << " " << cz.wiek;
  }
		
};
