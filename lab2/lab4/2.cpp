#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
time_t t = time(0);   // get time now
struct tm * now = localtime( & t );
long int convert_to_days(int day,int month,int year) {
    return (year*365)+(month*30)+(day);
}
void age(long int a,long int b,string name) {
    long int c = b - a + convert_to_days(0,1,1900);
    int year,month,day;
    year = c/(365);
    month = (c%(365))/(30);
    day = (c%(30));
    cout<<"Hey "<<name<<" !Your age is ";
    cout<<year<<" years,"<<month<<" months,"<<day<<" days"<<endl;
    cout<<"Your Age in Days:"<<c<<" days since your birth"<<endl;
    cout<<"Your Age in Hours:"<<c*24<<" hours since your birth"<<endl;
    cout<<"Your Age in Minutes:"<<c*24*60<<" minutes since your birth"<<endl;
    cout<<365-(c/365)<<" days left for your next birthday"<<endl<<endl;
}

struct dob {
    int day,month,year;
    long int age_in_days;
    char name[100];
    void display() {
        age(age_in_days,convert_to_days(now->tm_mday,now->tm_mon,now->tm_year),name);
    }
};
int main() {
    dob d[100],temp;
    char ch;
    int day,month,year,n,i=0;
    do {
        cout<<"1 to enter a person"<<endl;
        cout<<"2 to sort according to the descending order of age"<<endl;
        cout<<"3 to display all"<<endl;
        cout<<"0 to exit"<<endl;
        cin>>n;
        if(n==1) {
            cout<<"Enter name:";
            cin>>d[i].name;
            cout<<"Enter the date of birth (dd/mm/yyyy):";
            cin>>d[i].day>>d[i].month>>d[i].year;
            d[i].age_in_days=convert_to_days(d[i].day,d[i].month,d[i].year);
            i++;
        }
        else if(n==2) {
            for(int j=0;j<i;++j) {
                if(d[j].age_in_days<d[j+1].age_in_days) {
                    temp = d[j];
                    d[j] = d[j+1];
                    d[j+1] = temp;
                }
            }
            system("clear");
            cout<<"Sorting done..."<<endl;
        }
        else if(n==3) {
            system("clear");
            for(int j=0;j<i;++j)
                d[j].display();
        }
    }while(n!=0);
    return 0;
}
