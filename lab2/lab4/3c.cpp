#include<iostream>
#include<iomanip>
using namespace std;
int main() {
cout<<"Given sentence : ";
cout<<"This is a test of the width member function\n";
cout<<"This\n";
cout<<setw(5)<<"is"<<endl;
cout<<setw(6)<<"a"<<endl;
cout<<setw(8)<<"test"<<endl;
cout<<setw(9)<<"of"<<endl;
cout<<setw(10)<<"the"<<endl<<setw(11)<<"widt"<<endl<<setw(12)<<"h"<<endl<<setw(13)<<"memb"<<endl<<setw(14)<<"er"<<endl<<setw(15)<<"func"<<endl<<setw(16)<<"tion"<<endl;
return 0;
}
