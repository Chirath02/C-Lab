#include<iostream>
using namespace std;

class rational {
	double num,denum;
	public:
	rational() {
		num=denum0.0;
	}
	rational(double n,double d) {
		num=n;
		denum=d;
	}
	rational operator +(rational ob1) {
		rational tmp;
		tmp.num=(num*ob1.denum)+(denum*ob1.num);
		tmp.denum=(denum*ob1.denum);
		return tmp;
	}
	void reduce() {	
		while(1) {
			int cdenum=denum,cnum=num;
			int x=min(denum,num);
			int chk=0;
			for(int i=2;i<=x;i++) {
				if(cdenum%i==0&&cnum%i==0) {
					chk=1;
					cdenum/=i;
					cnum/=i;
					break;
				}
			}
			if(chk==0)
				break;
			denum=cdenum;
			num=cnum;
		}
	}
	friend ostream &operator<<( ostream &output,rational &d) { 
		 output<<d.num<<"/"<<d.denum<<endl;
		 return output;            
	}
	friend istream &operator>>( istream  &input,rational &d) { 
		input >> d.num >> d.denum;
		return input;            
	}
};

int main() {
	rational r1,r2;
	cout<<"enter the values for two rational numbers\n";
	cin>>r1>>r2;
	rational r3;
	cout<<"object 1 = "<<r1;
	cout<<"object 2 = "<<r2;
	r3=r1+r2;
	cout<<"objecr 3 = "<<r3;
	r3.reduce();
	cout<<"object 3 after reductoion\n";
	cout<<r3;
	return 0;
}
	
