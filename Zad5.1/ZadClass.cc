#include<iostream>
#include<string>

using namespace std;

class Osoba;

class Osoba{
	public:
		Osoba(std::string imie, std::string nazwisko){
			this->imie = imie;
			this->nazwisko = nazwisko;
		}
		
		~Osoba();
		void wypisz();
		
	private:
		std::string imie, nazwisko;
		
	protected:
		void wypiszDane(){
			cout << this->imie << " " << this->nazwisko;
		}
};

Osoba::~Osoba(){
	cout << "obiekt zniszczony";
}

void Osoba::wypisz(){
	wypiszDane();
}

int main(){
	Osoba o("dawid", "bednarczyk");
	
	o.wypisz();
	cout << "\n";
	return 0;
}


