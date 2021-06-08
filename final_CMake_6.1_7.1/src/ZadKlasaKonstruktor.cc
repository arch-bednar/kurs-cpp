//5.4
#include<iostream>
#include<string>

using namespace std;

class Ziomeczeq{
	public:
		Ziomeczeq(){
			this->imie = "Sebix";
			this->nazwisko = "Seba";
		}
		
		Ziomeczeq(string imie, string nazwisko){
			this->imie = imie;
			this->nazwisko = nazwisko;	
		}
		
		~Ziomeczeq(){
		  cout << "Spadaj ziomeczq" << endl;
		}
		
	private:
		string imie, nazwisko;	
};
