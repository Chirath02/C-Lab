#include<iostream>
using namespace std;
int main()
{
    int count[5],spoiledballot,n;
    char ch;
    for(int i=0;i<5;++i)
	count[i] = 0;
    do {
	cout<<"Enter the ballot no:";
	cin>>n;
	switch(n) {
	    case 1:count[0]++;
	    break;
	    case 2:count[1]++;
	    break;
	    case 3:count[2]++;
	    break;
	    case 4:count[3]++;
	    break;
	    case 5:count[4]++;
	    break;
	    default:spoiledballot++;
	}
	cout<<"Do you want to continue ? (y/n)";
	cin>>ch;
    }while(ch=='Y'||ch=='y');
    
    for(int i=0;i<5;++i) {
	cout<<"Vote of Candidate "<<i+1<<" is :"<<count[i]<<endl;
    }
    cout<<"Spoiled ballot :"<<spoiledballot;
    cout<<endl;
}