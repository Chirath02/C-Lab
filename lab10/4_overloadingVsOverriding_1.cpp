#include <iostream>

using namespace std;

class Base {
public:
  void print() {
    cout<<"I am an Instance of class base."<<endl;
  }
};

class Sub : public Base {
public:
  void print(int i=0) {
    cout<<"I am an Instance of derived class."<<endl;
  }
};

int main() {
  Base *B;
  Sub S;
  B = &S;
  B->print();
}
