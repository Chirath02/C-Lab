#include<iostream>
using namespace std;
main()
{
    int amount,year,i;
    float rate,sum;
    cout<<"Enter initial ammount:";
    cin>>amount;
    cout<<"Enter number of year:";
    cin>>year;
    cout<<"Enter initial rate:";
    cin>>rate;
    sum=amount;
    for(i=0;i<year;i++) {
        sum=sum+sum*(float)(rate/100);
        cout<<"At the end of year "<<i+1<<" ,you will have "<<sum<<" rs"<<endl;
    }
    return 0;
}
