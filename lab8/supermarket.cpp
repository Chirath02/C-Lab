#include <iostream>
#include <cstring>
using namespace std;

class Product {
protected:
	long barcode;
	string name;
public:
	Product(long bcode,string s) {
		barcode = bcode;
		name = s;
	}
	Product() {
		barcode = 0;
		name = "No name";
	}
	void setCode() {
		cout<<"\nEnter product:"<<endl;
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter barcode : ";
		cin>>barcode;
	}
	void getCode() {
		cout<<"\nBarcode of "<<name<<" is : "<<barcode<<endl;
	}
	void scanner() {
		cout<<"\nEnter barcode : ";
		cin>>barcode;
	}
	void printer() {
		cout<<"\nDetails : "<<endl<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Barecode = "<<barcode<<endl;
	}
};

class PrepackedFood : public Product {
	float unitPrice;
public:
	PrepackedFood(long bcode,string s ,float Price ) : Product(bcode,s) {
		unitPrice = Price;
	}
	void printer() {
		cout<<endl<<"\nDetails : "<<endl<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Barecode = "<<barcode<<endl;
		cout<<"Unit Price = "<<unitPrice<<endl;
	}
};

class FreshFood : public Product  {
	float weight,pricePerKg;
public:
	FreshFood(long bcode,string s,float w,float Price) : Product(bcode,s) {
		weight = w;
		pricePerKg = Price;
	}
	void printer() {
		cout<<endl<<"\nDetails : "<<endl<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Barecode = "<<barcode<<endl;
		cout<<"Price per Kg = "<<pricePerKg<<endl;
	}
};

int main() {
	PrepackedFood Food(10001,"Milk",599);   //Object delcaration of prepacked foog
	FreshFood Food1(10002,"Oranges",56,799);  //Object delcaration of freshfood foog
	
	Food.printer();      //Prepacked food class 
	Food.setCode();
	Food.printer();
	Food.getCode();
	Food.printer();
	Food.scanner();
	Food.printer();
	
	Food1.printer();     //FreshFood food class 
	Food1.setCode();
	Food1.printer();
	Food1.getCode();
	Food1.printer();
	Food1.scanner();
	Food1.printer();
}