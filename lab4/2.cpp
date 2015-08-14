#include <iostream>
using namespace std;
class phone
{
public:
    int area ;
    int exc;
    long num;
    
    void intializ (int x ,int y , long z)
    {
        area=x;
        exc=y;
        num=z;
        cout<<"MY NUMBER IS  =  "<<area<<exc<<num<<endl;
    }
    void input()
    {
        cout<<"ENTER YOUR NUMBER"<<endl;
        cout<<"ENTER three parts of a phone number separately (area ,exc,num)"<<endl;
        cin>>area;
        cin>>exc;
        cin>>num;
    }
    void disp()
    {
        cout<<"YOUR NUMBER IS    =   "<<area<<exc<<num<<endl;
    }
};
int main()
{
    phone p1 ,p2 ;
    p2.input();
    p2.disp();
    p1. intializ (91, 124, 2304871);
    
    return 0;
}



