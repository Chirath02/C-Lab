#include<iostream>
#include<stdlib.h>
using namespace std;
class EMPLOYEE {
private:
	int Employee_Number;
	float DA,IT;
	char Employee_Name[100];
	float Net_sal,Basic;
public:
	void readData() {
		cout<<"Enter Employee Details\n\n";
		cout<<"Enter the Employee number :";
		cin>>Employee_Number;
		cout<<"Enter the Employee Name:";
		cin>>Employee_Name;
		cout<<"Enter the Basic salary:";
		cin>>Basic;	
	}
	void calculate() {
		DA = 0.58 * Basic;
		IT = 0.2 * Basic;
		Net_sal = Basic - IT;
	}
	void print() {
		cout<<"\nEmployee Name :"<<Employee_Name<<"\nEmployee Number :"<<Employee_Number;
		cout<<"\nBasic :"<<Basic <<"\nDA :"<<DA<<"\nIncome Tax :"<<IT<<"\nNet salary :"<<Net_sal<<endl;
	}
};


int main() {
	EMPLOYEE N[100];
	char ch;
	int i=0;
	do {
		system("clear");
		N[i].readData();
		N[i].calculate();
		N[i].print();
		i++;
		cout<<"\nDo you want to calculate again?(y/n) :";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
