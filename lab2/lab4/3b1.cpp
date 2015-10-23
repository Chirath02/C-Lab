#include<iostream>
#include<cstring>
using namespace std;
string show(int x) {
    if(x) 
        return "True ";
    return "False";
}
int main() {
    int a=1,b=1;
    cout<<"  A  |"<<"  B  |"<<" A and B |"<<" A or B |"<<endl;
    for(int i=0;i<4;++i) {
        if(i==1 || i==3) 
            b--;
        if(i==2) {
            a-- ; b++;
        }
        cout<<show(a)<<"|"<<show(b)<<"|  "<<show(a&b)<<"  |  "<<show(a|b)<<" |"<<endl;
    }
    return 0;
}
