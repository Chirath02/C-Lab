#include <iostream>
#include <cstring>
using namespace std;

class Student {
protected:
	char name[100];
	int rNo;
  float mark;
public:
	Student() {
		strcpy(name,"No Name");
		rNo = 0;
	}
};

class ServeAnHour : virtual public Student {  //inherits virtually from Student
protected:
  float mark;
public:
  ServeAnHour() {
    mark = 0;
  }
  virtual void getData1() {
    cout<<"Enter name ";
    cin>>name;
    cout<<"Enter Roll no";
    cin>>rNo;
    cout<<"Enter marks :";
    cin>>mark;
  }
};

class Academics : public virtual Student {  //inherits virtually from Student
public:
  Academics() {
    mark = 0;
  }
  void getData() {
    cout<<"Enter name ";
    cin>>name;
    cout<<"Enter Roll no";
    cin>>rNo;
    cout<<"Enter marks :";
    cin>>mark;
  }
};

class Sports : public virtual Student {  //inherits virtually from Student
public:
  Sports() {
    mark = 0;
  }
  void getData() {
    cout<<"Enter name ";
    cin>>name;
    cout<<"Enter Roll no";
    cin>>rNo;
    cout<<"Enter marks :";
    cin>>mark;
  }
  void display() {
    cout<<"Name : "<<name<<endl;
    cout<<"Rool No :"<<rNo<<endl;
    cout<<"Marks :"<<mark<<endl;
  }
};

class Reports : public ServeAnHour , public Academics {   //inherits from ServeAnHour and Academics
public:
  Reports() {
  }
  void display() {
    cout<<"Name : "<<name<<endl;
    cout<<"Roll No :"<<rNo<<endl;
    cout<<"Marks :"<<mark<<endl;
  }
};

int main() {
  Reports R;
  R.getData();
  R.display();
  Sports S;
  S.getData();
  S.display();
  return 0;
}
