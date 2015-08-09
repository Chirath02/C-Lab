#include<iostream>
//#include<conio>
using namespace std;
class counter1 {
private:
	int c;
public:
	counter1() {
		c = 0;
	}
	void count() {
		c++;
	}
	void display() {
		cout<<"\nCount = "<<c<<endl;
	}
};


int main() {
	counter1 c;
	int n;
	do {
		cout<<"\n**** Counter ****\n\n";
		cout<<"Enter 1 to increment counter :";
		cout<<"\nEnter 2 to show counter value :";
		cout<<"\nEnter 3 to exit :";
		cin>>n;
		if(n==1) 
			c.count();
		else
			c.display();
	}while(n!=3);
	return 0;
}