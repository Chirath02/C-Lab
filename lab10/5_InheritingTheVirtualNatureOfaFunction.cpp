#include <iostream>

using namespace std;

class Base {
public:
  virtual void print() {
    cout<<"I am an Instance of class base."<<endl;
  }
};

class Sub : public Base {
public:
  void print() {
    cout<<"I am an Instance of derived class Sub."<<endl;
  }
};

class Subsub : public Sub {
public:
  void print() {
    cout<<"I am an Instance of derived class Subsub."<<endl;
  }
};

int main() {
  Sub *B;
  Subsub S;
  B = &S;
  B->print();
}

/*
        output

I am an Instance of derived class Subsub.

*/
