#include<iostream>
using namespace std;
int main() {
    int counter, n, fact = 1;
    do {
	cout<<"Enter the Number :";
	cin>>n;
	if(n==0)
	    break;
	for (int i = 1; i <= n; i++) 
	    fact = fact * i;
	cout<<n<<" Factorial Value Is "<<fact<<endl;
    }while(n!=0);
    return 0;
}