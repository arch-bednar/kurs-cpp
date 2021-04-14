#include<iostream>
#include<iomanip>
using namespace std;

int main(){
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
  
  return 0;
}
