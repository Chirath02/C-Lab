#include<iostream>
using namespace std;
#define LL long long
class matrix
{
	int ** mat;
	public:
	int rn,cn;
	matrix() {}
	matrix(const int r,const int c) {
		rn=r;
		cn=c;
		mat= new int * [r];
		for(int i=0;i<r;i++) {
			mat[i]=new int [c];
		}
	}
	friend istream &operator>>( istream  &input,matrix & m) { 
		for(int i=0;i<m.rn;i++)
			for(int j=0;j<m.cn;j++)
				cin>>m.mat[i][j];
		return input;            
	}
	friend ostream &operator<<( ostream &output,matrix & m) { 
		for(int i=0;i<m.rn;i++) {
			for(int j=0;j<m.cn;j++)
				cout<<m.mat[i][j]<<" ";
			cout<<endl;
		}
		return output;            
	}
	matrix operator +( matrix m) {
		if(rn!=m.rn||cn!=m.cn) {
			cout<<"matrices cannot be added.They are incompatible\n";
			matrix tmp(rn,cn);
			return tmp;
		}
		else {
			matrix tmp(rn,cn);
			for(int i=0;i<rn;i++)
				for(int j=0;j<cn;j++) 
					tmp.mat[i][j]=mat[i][j]+m.mat[i][j];
			cout<<tmp;
			return tmp;
		}
	}
	matrix operator *(matrix m) {
		if(cn!=m.rn) {
			cout<<"matrices cannot be multiplied.They are incompatible\n";
			matrix tmp(m.rn,m.cn);
			return tmp;
		}
		else {
			matrix tmp(rn,m.cn);
			for(int i=0;i<rn;i++) {
				for(int j=0;j<m.cn;j++) {
					LL int sum=0;
					for(int k=0;k<cn;k++)
						sum+=(mat[i][k]*m.mat[k][j]);
					tmp.mat[i][j]=sum;
				}
			}
			return tmp;
		}
	}
	
	void check(int a) {		
		if(cn!=a)
			cout<<"matrices cannot be multiplied.They are incompatible\n";
		else
			cout<<"matices can be multiplied\n";
	}
};

int main() {
	while(1) {
		int x=1;
		if(x) {
			int r,c;
			cout<<"Enter the order of the first matirx\n";
			cin>>r>>c;
			matrix m1(r,c);
			cout<<"Enter the order of the second matirx\n";
			cin>>r>>c;
			matrix m2(r,c);
			cout<<"Enter elements of first matrix\n";
			cin>>m1;
			cout<<"Enter elements of second matrix\n";
			cin>>m2;
			cout<<"\nPress 1 to add the two matrices and display the result\nPress 2 to check whether the given matrices can be multiplied or not\nPress 3 to multiply the given matrices and dispaly the result\nPress 0 to exit\n";
			cin>>x;
			if(x==1) {
				matrix m3(m1.rn,m1.cn);
				m3=m1+m2;
			}
			if(x==2) {
				m1.check(m2.rn);
			}
			if(x==3) {
				matrix m3(m2.rn,m2.cn);
				m3=m1*m2;
				cout<<m3;
			}
			if(x==0)
				break;
		}
		else
			break;
		cout<<"press 1 to continue,else press 0\n";
		cin>>x;
	}
	return 0;
}
		
	