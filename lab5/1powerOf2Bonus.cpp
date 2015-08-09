#include<iostream>
//#include<conio>
using namespace std;
int main() {
	int n;
	long sum=2,r=0;
	cout<<"Enter n to find the power of 2 :";
	cin>>n;
	for(int i=1;i<n;++i)
		sum*=2;
	cout<<"2 ^ "<<n<<" = "<<sum;
	while(sum) {
		r+=sum%10;
		sum/=10;
	}
	cout<<"\nSum = "<<r<<endl;
	return 0;
}