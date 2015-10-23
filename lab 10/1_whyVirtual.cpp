#include <iostream>

using namespace std;

class Base {
public:
  void print() {
    cout<<"I am an Instance of class base."<<endl;
  }
};

class Sub1 : public Base {
public:
  void print() {
    cout<<"I am an Instance of derived class 1."<<endl;
  }
};

class Sub2 : public Base {
public:
  void print() {
    cout<<"I am an Instance of derived class 2."<<endl;
  }
};

void who_are_you(Base &b){
  b.print();
}
int main() {
  Base B;
  Sub1 S1;
  Sub2 S2;
  who_are_you(B);
  who_are_you(S1);
  who_are_you(S2);
  return 0;
}

/*
        output

I am an Instance of class base.
I am an Instance of class base.
I am an Instance of class base.

*/
