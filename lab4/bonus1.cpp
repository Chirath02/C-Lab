#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,p;
int s=0;
cout<<"Enter number:";
cin>>n;
cout<<"\nEnter the power:";
cin>>p;
int s2=pow(n,p);
while(s2){
s+=s2%10;
s2/=10;}
cout<<"\nThe sum of digits of "<<pow(n,p)<<" = "<<s<<endl;
return 9;
}
