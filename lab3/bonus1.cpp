#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Enter  N : ";
    cin>>n;
    cout<<"\n ";
    for(int i=0;i<n;i++) {
        cout<<setw(4)<<i+1;
    }
    int n1=0;
    for(int i=1;i<=n;i++) {
        cout<<"\n ";
        for(int j=0;j<n;j++) {
            cout<<"+---";
        }
        cout<<"+\n";
        cout<<i<<"|";
        for(int j=1;j<=n;j++) {
            cout<<setw(3)<<i*j<<"|";
            n1+=n;
        }
    }
        cout<<endl<<" ";
        for(int j=0;j<n;j++) {
            cout<<"+---";
        }
    cout<<endl;
    return 0;
}
