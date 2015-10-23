#include<iostream>
using namespace std;

class Time {
private:
    int hour,minute,second;
public:
    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }
    Time (int i, int j, int k)
    {
        hour=i;
        minute=j;
        second=k;
    }
    friend Time operator+(Time &t1, Time &t2);
    void Display()
    {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};

Time operator+(Time &t1, Time &t2) {
    Time temp;
    temp.hour   = t1.hour + t2.hour;
    temp.minute = t1.minute + t2.minute;
    temp.second = t1.second + t2.second;
    while(temp.second >= 60){
        temp.second = temp.second-60;
        temp.minute++;
    }
    while(temp.minute >= 60){
        temp.minute = temp.minute-60;
        temp.hour++;
    }
    while(temp.hour >= 12){
        temp.hour = temp.hour-12;
    }
    return temp;
}

int main() {
    int ah,bh,am,bm,as,bs;
	cout<<"Enter the time in hour second and minutes";
    cin>>ah>>am>>as;
    Time T1(ah,am,as);
	cout<<"Enter the time in hour second and minutes";
    cin>>bh>>bm>>bs;
    Time T2(bh,bm,bs);
    Time T3 = T1+T2;
    T3.Display();
	return 0;
}