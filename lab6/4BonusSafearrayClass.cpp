#include<iostream>
using namespace std;

class sarray {
	int arr[100];
	int lb,ub;
public:
	sarray(int l,int u) {
		lb=l;
		ub=u;
	}
	void input() {
		cout<<"enter the array elements\n";
		for(int i=lb-lb;i<=ub-lb;i++)
			cin>>arr[i];
		void display() {
			for(int i=lb-lb;i<=ub-lb;i++)
					cout<<arr[i]<<" ";
		}
		int operator [](int a) {
			if(a<lb||a>ub) {
				cout<<"array out of bound\n";
				return -1;
			}
			else
				return arr[a-lb];
		}
};

int main() {
	int l,b;
	cout<<"Enter lower bound and upper bound (.eg- 100 and 150)\n";
	cin>>l>>b;
	sarray arr(l,b);
	arr.input();
	int n;
	cout<<"Enter number of queries\n";
	cin>>n;
	cout<<"Enter "<<n<<" Queries\n";
	for(int i=0;i<n;i++) {
		int tmp;
		cin>>tmp;
		cout<<arr[tmp];
	}
		return  0;
}
