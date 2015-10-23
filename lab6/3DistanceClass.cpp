#include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance() {
        feet = 0;
        inches = 0;
    }
    Distance (int i , float j) {
        feet = i;
        inches = j;
    }
    friend bool operator>(Distance , Distance);

};

bool operator> (Distance d1, Distance d2) {
    if((d1.feet > d2.feet )&&(d1.inches > d2.inches)) {
        return true;
    }
    else {
        return false;
    }
}


int main() {
    Distance D1(3,4);
    Distance D2(2,3);
    Distance D3(5,6);
    Distance temp1, temp2;
    if(D1>D2 && D1>D3) 
        cout<< "D1 is the largest"<<endl;
    else  if (D2>D3) 
        cout<<"D2 is the largest"<<endl;
    else 
        cout<<"D3 is the Largest"<<endl;
    return 0;
}
