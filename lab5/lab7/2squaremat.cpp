#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter order of sqare matrix :";
	cin>>n;
	float *ptr = new float[n][n];
	cout<<"Enter the elements :";
	for(int i=0;i<n;++i)
		for(int j=0;j<n;j++)
			cin>>ptr[i][j];
	float sum,total=0;
	for(int i=0;i<n;++i) {
			sum = 0;
		for(int j=0;j<n;j++)
			sum += ptr[i][j];
		cout<<"Sum of row "<<i+1<<" = "<<sum;
		total += sum;
	}
	cout<<"Total sum of all rows = "<<total;	
	return 0;
}