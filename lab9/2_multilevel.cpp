//Mutltilevel inheritance

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

class Manager : public Employee {  //inherits from Employee
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

class HRManager : public Manager {  //inherits from Manger
protected:
	char job[100];
public:
	HRManager() {
		strcpy(job,"HR Manager");
	}
	void Display() {
		cout<<"Name = "<<name<<endl;
		cout<<"empNo = "<<empNo<<endl;
		cout<<"Salary = "<<salary<<endl;
		cout<<"Job = "<<job<<endl;
	}
};

class ProjectManager : public Manager {  //inherits from Manger
protected:
	char job[100];
public:
	ProjectManager() {
		strcpy(job,"Project Manager");
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
	P.getData();
	P.Display();
	TeamLead T;
	T.getData();
	T.Display();
	Manager M;
	M.getData();
	M.Display();
  HRManager HRM;
	HRM.getData();
	HRM.Display();
  ProjectManager PM;
	PM.getData();
	PM.Display();
  return 0;
}
