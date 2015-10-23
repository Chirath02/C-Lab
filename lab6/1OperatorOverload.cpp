#include<iostream>
using namespace std;

class overload {
    private:
        int a,b;
    public:
        overload() {
            a=b=0;
        }
        
        overload(int i,int j) {
            a=i;
            b=j;
        }
        
        overload operator += (overload &x);
		
        void display(){
            cout<<a<<" "<<b<<endl;
        }
};
overload overload :: operator+= (overload &x) {
    a += b;
    return x;
}

int main() {
    overload obj1(2,3);
    overload obj2(3,4);
    obj1+=obj2;
    obj1.display();
    return 0;
}
