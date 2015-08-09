#include<iostream>
using namespace std;
class Stringrev {
private:
	unsigned int car_total;
	double cash_total;
public:
	tollBooth() {
		car_total = 0;
		cash_total = 0;
	}
	void payingCar() {
		car_total++;
		cash_total += 50;
	}
	void nonPayingCar() {
		car_total++;
	}
	void display() {
		cout<<"\nTotal cars = "<<car_total;
		cout<<"\nTotal Cash = "<<cash_total<<endl;
	}
};

int main() {
	tollBooth t;
	int n;
	cout<<"\n**** Toll Booth *****\n\n";
	cout<<"Press 1 for Paying car";
	cout<<"\nPress 2 for non Paying car";
	cout<<"\n 0 to stop :";
	do {
		cin>>n;
		if(n==1) 
			t.payingCar();
		else
			t.nonPayingCar();
	}while(n!=0);
	t.display();
	return 0;
}
