//5.4
#include<iostream>
#include<string>

using namespace std;

struct dude{
	string imie;
	string nazwisko;
	int age;
};

int main(){
	dude sebix = {"Sebix", "Seba", 12};
	dude kolega;
	kolega.imie = "Mati";
	kolega.nazwisko = "Szymczyk";
	kolega.age = 16;
	
	return 0;
}
