#include<iostream>

using namespace std;

#define PI 3
#define akmul(a, b) (a*b)
#define akadd(a, b) (a+b)
#define aksub(a, b) (a-b)


#define sklejam(W) \
	int a##W 21;
	
#define String( x ) # x

int main(){
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
	

	return 0;
}
