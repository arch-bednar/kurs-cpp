#ifndef Zad4xC_h
#define Zad4xC_h

#include<iostream>
#include<fstream>
#include<string>
#include<thread>
#include<chrono>
#include<iomanip>
#include<stdio.h>

#include"../include/Zad4x.h"


#define PI 3
#define akmul(a, b) (a*b)
#define akadd(a, b) (a+b)
#define aksub(a, b) (a-b)


#define sklejam(W) \
	int a##W 21;
	
#define String( x ) # x


using namespace std;

void Zad4x::LManipulacjaStrumieniemCout(){
	cout <<setw(20); //makes space between our next symbol redirected to cout
  	cout << 77 << endl;

  	float pi = 3.14159;

  	cout << setprecision(5) << pi <<endl; //max 5 numbers in float including spaces before ','
  	cout << setprecision(2) << pi <<endl; // -||- 2 numbers -||-

  	cout << setfill('x') << setw(10); cout << "D" << endl; //setfill makes specifided symlos as width-unit for setw() function which means width space

  	float myNum = 1321311.43242356465;

  	cout << cout.precision(5) << endl; //sets floating point number to precision(5), that means number myNum will be showed as 1.3213
  	cout << myNum << endl;

  	cout << "fixed: " << fixed;
  	cout << myNum << endl;

  	cout << endl << " scientific: " <<  scientific;
  	cout << myNum << endl; //sets scientific

  	int myInt = 1234567;
  	cout << hex; //hexadecimal numbers
  	cout << myInt;

  	cout << endl << dec; //decimal numbers
  	cout << myInt << endl;
}

void Zad4x::ZadCinCoutFile(){
	  string bejb;
  	cout << "Type your word: "; getline(cin, bejb);
  	cout << "\n\nWaiting for printing string\n";

  	this_thread::sleep_for(chrono::milliseconds(5000));
  
  	cout << endl << "Now you can see your string: " << bejb;

  	cout << endl << endl << endl << "Now we are saving your string into file: myString.txt ......" << endl;
  	this_thread::sleep_for(chrono::milliseconds(5000));

  	ofstream Myfile("myString.txt");

  	Myfile << bejb;

  	cout << endl << "Hauhauhau... we saved your string!!";
  	cout << endl << endl << "Now we must print this string from file! ehemmmm......" <<endl;
  	Myfile.close();
  	this_thread::sleep_for(chrono::milliseconds(5000));

  	ifstream myFile("myString.txt");
  	string line;
  	while(getline (myFile, line)){
    	cout <<line;
  	}

  	cout << endl << endl << "Haha we did it!" << endl;

  	myFile.close();
}

void Zad4x::ZadCandCPP(){
	char sign = 'X';
  	cout << "C++ print :" << sign;
  	printf("\nC print %c\n", sign);
  	int liczba;
  	cout << "Input C++ : "; cin >> liczba;
  	puts("Input C "); scanf(" %d%*c", &liczba);

  	int* pointer;
  	pointer = &liczba;

  	cout << "\nPointer C++: " << pointer;
  	printf("\nPointer C: %p", pointer);

  	cout << "\nPointer value C++: " <<*pointer;
  	printf("\nPonter value C: %d", *pointer);
  	printf("\nHex C: %x", liczba);
  	cout <<"\nHex C++: " << hex << liczba;

  	cout << "\ncout stream";
  	cerr << "\ncerr stream\n";
}

void Zad4x::ZadParzysta(){
	a();
	cout << endl;
	b();
	cout << endl;
	cout << c();
}

void Zad4x::ZadParzystaCase(){
	int fun;
  	cout <<"Podaj liczbę 1-3 "; cin >> fun;
  	switch(fun){
  		case 1:
    		a();
    		break;
  		case 2:
    		b();
    		break;
  		case 3:
    		c();
    		break;
  		default:
    		cout<<"Nie ma takiej funkcji";
  	}
}

void Zad4x::ZadPetle(){
	int i=0,j=0;

  	cout<<"petla while i++"<<endl;
  	while(i<100){
    	cout<<i++<<endl;
    	if(i==90)
      		break;
  	}

  	cout<<endl<<endl<<endl<<"petla while ++i"<<endl;
  
  	while(j<100){
    	cout<<++j<<endl;
    	if(i%2==1)
      	continue;
  	}

  	cout<<"petla do-while"<<endl;
  
  	int k=0;
  	do{
    	cout<<k<<endl;
    	++k;
  	}
  	while(k<100);


  	cout<<endl<<"petla for"<<endl;
  	for(int l=0; l<100; l++)
    	cout<<l<<endl;
}

void Zad4x::ZadSwitch(){
	  string name;
  	cout << "Podaj imie: ";
  	getline(cin, name);
  	cout << "\n";
  	int choice = function(name);
  	switch(choice){
  	case 1:
    	cout << "Jesteś Marysia\n";
    	break;
  	case 2:
    	cout << "Za 5 metrow skrec w lewo\n";
    	break;
  	case 3:
    	cout << "Dzieci i owce glosu nie maja\n";
    	break;
  	default:
    	cout << "naura\n";
    	break;
  	}
}

void Zad4x::PreProcesor(){
	cout << PI << endl;
	cout << akmul(3,3)<< endl;
	
	#ifndef PI
		cout << "wieksze od 3" << endl;
	#elif PI == 3
		cout << "rowne od 3" << endl;
	#else
		cout << "mniejsze od 3" << endl;
	#endif
	
	cout << String(3) << endl;
}

int Zad4x::function(std::string name){
	if(name.compare("Marysia") == 0){
    	return 1;
  	}
  	else if(name.compare("Arkadiusz") == 0){
    	return 2;
  	}
  	else if(name.compare("Andrzej") == 0){
    	return 3;
  	}
  	return 4;
}

void Zad4x::a(){
	int num=255;
  	(num&1) ? (cout << "nieparzysta") : (cout<< "parzysta");
}

void Zad4x::b(){
	int num=255;
  	(num%2) ? (cout << "nieparzysta") : (cout << "parzysta");
}

string Zad4x::c(){
	int x;
  	cout << "Podaj liczbę: ";
  	cin >> x;

  	switch(x){
  	case 1:
  	case 2:
  	case 3:
    	return "1-3";
  	default:
    	return "różne od 1-3";
  	}
}


#endif
