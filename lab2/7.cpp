#include<iostream>
using namespace std;
int main()
{
    float income;
    cout<<"Enter income :";
    cin>>income;
    if(income<150000)
	cout<<"Tax : "<<0;
    else if (income<300000)
	cout<<"Tax : "<<income*0.1;
    else if(income <500000)
	cout<<"Tax : "<<income*0.2;
    else 
	cout<<"Tax :"<<income*0.3;
    cout<<endl;
    return 0;
}