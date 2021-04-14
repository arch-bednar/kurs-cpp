#include<iostream>
#include<fstream>
#include<string>
#include<thread>
#include<chrono>

using namespace std;

int main(){
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
  
  return 0;
}
