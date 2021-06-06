//5.4
#include<iostream>
#include<string>

using namespace std;

class Ziomeczeq{
	public:
		Ziomeczeq(){
			this->imie = "Sebix";
			this->nazwisko = "Nazwisko";
		}
		
		Ziomeczeq(string imie, string nazwisko){
			this->imie = imie;
			this->nazwisko = nazwisko;	
		}
		
		~Ziomeczeq(){
			cout << "Spadaj ziomeczq";
		}
		
	private:
		string imie, nazwisko;	
};

int main(){
	Ziomeczeq seba();
	Ziomeczeq ziom("Jendreg", "Owieczka");
	
	return 0;
}
