#include<iostream>
//#include<conio>
using namespace std;
class phone {
private:
	int area,exc;
	long num;
public:
	phone (int a,int e, long n) {
		area = a;
		exc = e;
		num = n;
	}
	void input() {
		cout<<"**Enter your Phone number***\n\n";
		cout<<"Enter the area code :";
		cin>>area;
		cout<<"Enter the exchange code :";
		cin>>exc;
		cout<<"Enter the phone number :";
		cin>>num;
	}
	void disp() {
		cout<<"("<<area<<") "<<exc<<"-"<<num<<endl;
	}
	phone() {
		area = 0;
		exc = 0;
		num = 0;
	}
};

int main() {
	phone  p1 (91, 124, 2304871), p2;
	//clrscr();
	p2.input();
	cout<<"\nMy number is = ";
	p1.disp();
	cout<<"\nYour number is = ";
	p2.disp();
	return 0;
}