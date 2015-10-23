#include<iostream>
using namespace std;
int main() {
    int number,sum_of_fact=0,fact;
    cout<<"Enter a number ";
    cin>>number;
    for(int i=1;i<=number;++i) {
        fact = 1;
        cout<<i<<"! = ";
        for(int j=i;j>1;--j) {
            fact = fact * j;
            cout<<j<<" x ";
        }
        cout<<"1 = "<<fact<<endl;
    }                                     
    return 0;
}

