#include<iostream>
//#include<conio>
using namespace std;
int main() {
	int n;
	long sum=0,res;
	cout<<"Enter n to find sum of factorials :";
	cin>>n;
	for(int i=1;i<=n;++i) {
		res = 1;
		for(int j=i;j>0;--j)
			res *= j;
		sum += res;
	}
	cout<<"\nSum = "<<sum<<endl;
	return 0;
}