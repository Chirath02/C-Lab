#include <iostream>
using namespace std;
int main()
{
    char c;
    long int n=0;
    cout<<"Enter digits of number(* to stop)"; 
    for(int i=0;i<6;++i) {
	cin>>c;
	if(c=='*')
	    break;
	n = n*10+(int)c-48;
    }
    cout<<endl<<"Number="<<n<<endl;
    return 0;
}