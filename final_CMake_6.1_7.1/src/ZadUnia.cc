#include<stdio.h>
#include<string.h>
#include<iostream>
//5.3
using namespace std;

class Unia{
	public:
		union stat{
  			char student;
  			int index;
  			double srednia;
		};
		stat imie;
		
		Unia(){
  			imie.student = 'c';
  			imie.index = 53124;
  			imie.srednia = 6.0;
		}
	
		void wypiszStat(){
			cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;
  			cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;
  			cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;
		}
};
