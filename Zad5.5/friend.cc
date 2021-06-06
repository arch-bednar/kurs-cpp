#include<iostream>
#include<stdio.h>
using namespace std;

class B;

class A{
	public:
		A(){
			this->a = 3;
		}
		
		int getB(B &obj){
			return obj.b;
		}
	
	private:
		
		int a;
		friend class B;
};

class B{
	public:
		B(){
			this->b=3;
		}
		
		int getA(A &obj){
			return obj.a;
		}
		
	private:
		int b;
};



int main(){
	A objA();
	B objB();
	
	return 0;
}
