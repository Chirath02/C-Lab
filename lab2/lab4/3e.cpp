#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a=10000;
    int b=2710;
    cout<<setw(10)<<setfill('*')<<right<<a<<endl;
    cout<<setw(10)<<setfill('%')<<left<<b<<endl;
    cout<<"0x"<<showbase<<setw(8)<<setfill('^')<<right<<b<<endl;
    return 0;
}
