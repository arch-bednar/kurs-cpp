#ifndef Zad2xC_h
#define Zad2xC_h

class Zad2x{
public:
  int &ref(){
    static int num=3;
    return num;
  }
  
  int* wsk(){
    static int a = 5;
    int *b=&a;
    return &a;
  }

  int value(){
    return 4;
  }

  int* tab(){
    static int t[3] {0,1,2};
    return t;
  }
};

#endif
