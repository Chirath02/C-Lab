#include<iostream>
using namespace std;
int main()
 {
int n;
cout<<"Enter the decimal number:";
cin>>n;
int total=0;
while(n>0)
{
total=n%2;
n/=2;
cout<<"\nNumber in binary is:"<<total;
}
int t=0;
while(n>0)
{
t=n%8;
n/=8;
cout<<"number in octal is:"<<t;
}
return 0;
}
