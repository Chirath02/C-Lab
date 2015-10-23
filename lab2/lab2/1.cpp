#include<iostream>
using namespace std;
int main() {
    char firstName[100],lastName[100],adress[200],city[100],state[50],zip[10],telephone[20];
    cout<<"Enter first your name :";
    cin>>firstName;
    cout<<"Enter last your name :";
    cin>>lastName;
    cout<<"Enter adress:";
    cin>>adress;
    cout<<"Enter city:";
    cin>>city;
    cout<<"Enter state:";
    cin>>state;
    cout<<"Enter zip code:";
    cin>>zip;
    cout<<"Enter Phone number";
    cin>>telephone;
    
    cout<<"\nName :"<<firstName<<" "<<lastName<<endl;
    cout<<"Adress :"<<adress<<endl;
    cout<<city<<" "<<state<<" "<<zip<<endl;
    cout<<"Ph.No :"<<telephone<<endl;
    return 0;
}
