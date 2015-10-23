//Hierarchical Inheritance

#include <iostream>
#include <cstring>
using namespace std;

class Employee {
protected:
	char name[100];
	int empNo;
	float salary;
public:
	Employee() {
		strcpy(name," ");
		empNo = 0;
		salary = 0;
	}
	void getData() {
		cout<<"Enter name ";
		cin>>name;
		cout<<"Enter Employee no";
		cin>>empNo;
		cout<<"Enter salary";
		cin>>salary;
	}
};

class Programmer : public Employee {  //inherits from Employee
protected:
	char job[100];
public:
	Programmer() {
		strcpy(job,"Programmer");
	}
	void Display() {
		cout<<"Name = "<<name<<endl;
		cout<<"empNo = "<<empNo<<endl;
		cout<<"Salary = "<<salary<<endl;
		cout<<"Job = "<<job<<endl;
	}
};

class TeamLead : public Employee {  //inherits from Employee
protected:
	char job[100];
public:
	TeamLead() {
		strcpy(job,"Team Leader");
	}
	void Display() {
		cout<<"Name = "<<name<<endl;
		cout<<"empNo = "<<empNo<<endl;
		cout<<"Salary = "<<salary<<endl;
		cout<<"Job = "<<job<<endl;
	}
};

class Manager : public Employee {   //inherits from Employee
protected:
	char job[100];
public:
	Manager() {
		strcpy(job,"Manager");
	}
	void Display() {
		cout<<"Name = "<<name<<endl;
		cout<<"empNo = "<<empNo<<endl;
		cout<<"Salary = "<<salary<<endl;
		cout<<"Job = "<<job<<endl;
	}
};

int main() {
	Programmer P;
	P.getData();  //Function from derived class Employee
	P.Display();  //Function from class Programmer
	TeamLead T;
	T.getData();  //Function from derived class Employee
	T.Display();  //Function from class TeamLead
	Manager M;
	M.getData();  //Function from derived class Employee
	M.Display();  //Function from class Manager
	return 0;
}
