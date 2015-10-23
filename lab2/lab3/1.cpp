#include<iostream>
using namespace std;
int main() {
    int n,k=1;
    cout<<"Enterr a number :";
    cin>>n;
    for(int i=0;i<20;++i) {
	for(int i=0;i<10;++i)
	    cout<<n*k++<<" ";
	cout<<endl;
    }
    return 0;
}
