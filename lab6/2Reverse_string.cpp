#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Stringrev {
	private:
		char c_string[900],c;
		int n;
	public:
		Stringrev(char str[]) {
			strcpy(c_string, str);

		}
		void reversit() {
			n = strlen(c_string)-1;
			for(int i=0;i<n/2;++i) {
				c = c_string[i];
				c_string[i] = c_string[n-i];
				c_string[n-i] = c;	
			}
			cout<<"The reversed string is :\n"<<c_string<<endl;
		}
};

int main() {
    char str[900];
	cout<<"Enter a String :\n";
	cin.getline(str,900,'\n');
	Stringrev s(str);
	s.reversit();
	return 0;
}
