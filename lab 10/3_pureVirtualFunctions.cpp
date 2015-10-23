#include <iostream>

using namespace std;

class Base {
public:
  virtual void print() = 0;
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

class Sub3 : public Base {
public:
  void print() {
    cout<<"I am an Instance of derived class 3."<<endl;
  }
};

void who_are_you(Base &b){
  b.print();
}
int main() {
  Sub1 S1;
  Sub2 S2;
  Sub3 S3;
  who_are_you(S1);
  who_are_you(S2);
  who_are_you(S3);
  return 0;
}

/*
        output

I am an Instance of derived class 1.
I am an Instance of derived class 2.
I am an Instance of derived class 3.

*/
