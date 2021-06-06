#include<iostream>
#include<string>

using namespace std;

struct czarodziej{
	string imie;
	string nazwisko;
	int wiek;
} harryPotter;

int main(){
	harryPotter = {"Harry", "Potter", 11};
	
	cout << harryPotter.imie;
	
	czarodziej Ron = {"Ron", "Weasley", 11};
	
	cout << endl << Ron.imie;
	
	return 0;
}
