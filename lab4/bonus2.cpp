#include<iostream>
using namespace std;
int main()
 {
int i;
int f=1;
int k;
for(k=1;k<=15;k++)
{
for(i=1;i<=k;i++)
{
f=f*i;
cout<<k<<"! = "<<f<<"\n";
}
}
return 0;
}

