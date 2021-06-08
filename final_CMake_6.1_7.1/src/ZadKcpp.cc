#include<iostream>
#include"Zadania.cc"

using namespace std;

class ZadKcpp{
public:
  int chooseExercise();
private:
  void numbers();
  void Zad1();
  void Zad2();
  void Zad3();
  void Zad4();
  void Zad5();
};

int ZadKcpp::chooseExercise(){
	numbers();
	cout << "Podaj numer zadania: ";
	int choice;
	cin >> choice;
	if (choice > 0 && choice < 24){
		cout << choice;
		switch(choice){
		case 1:
		  Zad1();
		  break;
		case 2:
		  Zad2();
		  break;
		case 3:
		  Zad3();
		  break;
		case 4:
		  Zad4();
		  break;
		case 5:
		  Zad5();
		  break;
		default:
		  break;
		}
	}
	return 0;
}

void ZadKcpp::numbers(){
  string exercises[5] = {"1x" , "2x", "3x", "4x", "5x"};							
	for(int ex=0; ex < sizeof(exercises)/sizeof(exercises[1]); ex++){
		cout << ex + 1 << ". Zadania " << exercises[ex] << endl; 
	}
}

void ZadKcpp::Zad1(){
  Zad1x z1;
  cout << "Wybierz funkcje: " << endl;
  cout << "1. add" << endl << "2. multiply" << endl << "3. matrix" << endl << "4. print" << endl << "5. sub" << endl;
  int fun;
  cin >> fun;
  
  switch(fun){
  case 1:
    z1.add(2,3);
    break;
  case 2:
    z1.multiply(2,3);
    break;
  case 3:
    z1.matrix();
    break;
  case 4:
    z1.print();
    break;
  case 5:
    z1.sub();
    break;
  default:
    break;
  }
}

void ZadKcpp::Zad2(){
  Zad2x z2;
  cout << "Wybierz funkcje: " << endl;
  cout << "1. &ref" << endl << "2. *wsk" << endl << "3. value" << endl  << "4.* tab"<< endl;

  int fun;
  cin >> fun;
  switch(fun){
  case 1:
    {
    int i = z2.ref();
    cout << "Zwrot przez refenrencje " << endl << i;
    break;;
    }
  case 2:
    {
    cout << "Zwrot przez wskaznik " << endl << z2.wsk();
    break;
    }
  case 3:
    {
    cout << "Zwrot przez wartosc " << endl << z2.value();
    break;
    }
  case 4:
    {
    int * t=z2.tab();
    cout << "Zwrot tablicy " << endl << t[0] << " " << t[1] << " " << t[2];
    break;
    }
  default:
    break;    
  }
}

void ZadKcpp::Zad3(){
  Zad3x z3;
  cout << "Wybierz funkcje: " << endl;
  cout << "1. ZadAdresowaniePamieci" << endl << "2. ZadArytmetykaWskaznikow" << endl << "3. ZadWywolywanieFunkcji" << endl << "4. ZadIq" << endl;
  cout << "5. ZadOperatoryPrzypisania" << endl << "6. ZadPriorytetyOperatorow" << endl << "7. ZadBin2Dec" << endl << "8. ZadDec2Bin"<< endl;

  int fun;
  cin >> fun;

  switch(fun){
  case 1:
    z3.ZadAdresowaniePamieci();
    break;
  case 2:
    z3.ZadArytmetykaWskaznikow();
    break;
  case 3:
    z3.ZadWywolywanieFunkcji();
    break;
  case 4:
    z3.ZadIq();
    break;
  case 5:
    z3.ZadOperatoryPrzypisania();
    break;
  case 6:
    z3.ZadPriorytetyOperatorow();
    break;
  case 7:
    z3.ZadBin2Dec();
    break;
  case 8:
    z3.ZadDec2Bin();
    break;
  default:
    break;
  }
}

void ZadKcpp::Zad4(){
  Zad4x z4;
  cout << "wybierz funkcje" << endl;
  cout << "1. LManipulacjaStrumieniemCout" << endl << "2. ZadCinCoutFile" << endl << "3. ZadCandCPP" << endl << "4. ZadParzysta" << endl << "5.ZadParzystaCase"<<endl;
  cout << "6. ZadPetle" << endl << "7. ZadSwitch" << endl << "8. PreProcesor" << endl;

  int fun; cin >> fun;

  switch(fun){
  case 1:
    z4.LManipulacjaStrumieniemCout();
    break;
  case 2:
    z4.ZadCinCoutFile();
    break;
  case 3:
    z4.ZadCandCPP();
    break;
  case 4:
    z4.ZadParzysta();
    break;
  case 5:
    z4.ZadParzystaCase();
    break;
  case 6:
    z4.ZadPetle();
    break;
  case 7:
    z4.ZadSwitch();
    break;
  case 8:
    z4.PreProcesor();
    break;
  default:
    break;
  }
}

void ZadKcpp::Zad5(){
  cout << "Wybierz zadanie: " << endl;
  cout << "1. ZadClass" << endl << "2. ZadStruct" << endl << "3. ZadUnia" << endl << "4. ZadKlasaKonstruktor" << endl << "5. ZadStructKonstructor" << "6. friend" << endl << "7. ZadMetodyAbstrakcyjne" << endl;
  int fun; cin >> fun;

  switch(fun){
  case 1:
    {
      Osoba o("dawid", "bednarczyk");
      cout << "tworzymy osobe" << endl;
      cout << "wypisujemy dane ";
      o.wypisz();
      cout << endl << "niszczymy obiekt: ";
    }
  case 2:
    {
      Structure s;
      cout << "klasa zawierajaca strukture czarodziej" << endl;
      cout << "harry potter i ron" << endl;
      cout << "wypisujemy dane z harryego: ";
      s.wypiszCzarodzieja(s.harryPotter);
      cout <<endl << "wypisujemy dane z rona: ";
      s.wypiszCzarodzieja(s.Ron);
      break;
    }
  case 3:
    {
      Unia u;
      cout << "Klasa z unia" << endl;
      cout << "wypisujemy co ma unia " << endl;
      u.wypiszStat();
      break;
    }
  case 4:
    {
      Ziomeczeq seba;
      cout << "pierwszy obiekt tworzymy poprzez niepodawanie argumentów" << endl;
      Ziomeczeq ziom("Andrzej", "Owca");
      cout << "ale już drugi poprzez podanie danych Andrzej Owca" << endl;
      cout << "a teraz niszczymy obiekty" << endl;
      break;
    }
  case 5:
    {
      Dude d;
      cout << "klasa ze strukturą i sposobami inicjalizacji" << endl;
      cout << "pierwszy obiekt stworzyliśmy poprzez listę inicjalizacyjną {Sebix, Seba, 12}" << endl;
      cout << "ale drugi poprzez podanie określonych argumentów, a teraz ich wypiszemy:" << endl;
      d.showDude(d.sebix);
      cout << endl;
      d.showDude(d.kolega);
      break;
    }
  case 6:
    {
      
      cout << "klasa z przyjaznia: tworzymy obiekt a i b";
      //A objA();
      //B objB();
      break;
    }
  case 7:
    cout << "klasy z abstrakcyjnymi figurami i metodami obliczajacymi pole i obwod: " << endl;
    wywolajAbstract();
    break;
  default:
    break;
  }
}

int main(){
	ZadKcpp z;
	z.chooseExercise();
	
	return 0;
}
