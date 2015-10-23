#include<iostream>
using namespace std;
int main() {
    int number,power;
    int sum;
    cout<<"Enter number:";
    cin>>number;
    cout<<"\nEnter the power:";
    cin>>power;
    sum = number;
    for(int i=1;i<power;++i) {
        sum *= number;
    }
    cout<<"\nThe sum of digits of "<<number<<" to the "<<power<<"th power is "<<sum<<endl;
    return 0;
}
