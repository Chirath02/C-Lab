#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int a=1,b=1;
    cout<<"  x   "<<"  y  |"<<" x XOR y "<<endl;
    for(int i=0;i<4;++i) {
        if(i==1 || i==3)
            b--;
        if(i==2) {
            a-- ; b++;
        }
        cout<<"  "<<a<<"     "<<b<<"  |    "<<(a^b)<<endl;
    }
    return 0;
}
