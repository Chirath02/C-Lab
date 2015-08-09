#include<iostream>
#include<conio>
using namespace std;
class bank {
private:
	float x,y;
	char op;
	double res;
	void sum() {
		res = x + y;
	}
	void sub() {
		res = x - y;
	}
	void mul(){
		res = x * y;
	}
	void div(){
		if(y!=0)
			res = x / y;
		else {
			cout<<"Error 2nd number cant be 0\n";
			res = 0;
		}
	}
	void disp() {
		cout<<"\nResult = "<<res<<endl;
	}
public:
	void input() {
		cout<<"**Calculator***\n\n";
		cout<<"Enter the Operation (+,-,*,/) :";
		cin>>op;
		cout<<"Enter two numbers :";
		cin>>x>>y;
	}
	void eval() {
		switch(op) {
			case '+': sum();
					  break;
			case '-': sub();
					  break;
			case '*': mul();
					  break;
			case '/': div();
					  break;
			default:cout<<"Wrong operator"<<endl;
		}
		disp();
	}
};

int main() {
	bank c;
	char ch;
	do {
		clrscr();
		c.input();
		c.eval();
		cout<<"\nDo you want to calculate again?(y/n) :";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}