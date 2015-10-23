#include <iostream>
#include <iomanip>
using namespace std;
struct rectangle
{
    float length,width,area,perimeter;
}r;
int main()
{
    
    cout << "Enter the length of a rectangle: ";
    cin>>r.length;
    cout << "Enter the width of a rectangle: ";
    cin>>r.width;
    cout << endl << endl;
    r.area=r.length*r.width;
    r.perimeter=2*(r.length+r.width);
    cout << fixed << showpoint << setprecision(2);
    cout<<"Area is:"<<r.area;
    cout<<"\nPerimeter is:"<<r.perimeter<<endl;
    return 0;
}
