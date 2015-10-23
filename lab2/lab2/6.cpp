#include<iostream>
using namespace std;
int main()
{
    float sum = 0,n;
    cout<<"Enter n :";
    cin>>n;
    for(int i=1;i<=n;++i) {
	sum = sum + ((float)i/(i+1));
    }
    cout<<"Sum :"<<sum<<endl;
    cout<<endl;
    return 0;
}