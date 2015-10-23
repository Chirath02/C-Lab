#include<iostream>
using namespace std;
class SavingAccounts {
	private:
		float AnnualInterestRate;
		float SavingBalance;
		float interest;
	public:
		void CalculateMonthlyInterest() {
			interest = SavingBalance * AnnualInterestRate/12;
			SavingBalance += interest;
			cout<<"New Saving balance ="<<SavingBalance<<endl;
		}
		SavingAccounts(float Anualinterest,float balance) {
			AnnualInterestRate = Anualinterest;
			SavingBalance = balance;
		}
		void ModifyInteresetRate() {
			cout<<"Enter new Annual Interest Rate :";
			cin>>AnnualInterestRate;
		}
};
int main() {
	float AIR,SB;
	cout<<"Enter Annual Interest Rate :";
	cin>>AIR;
	cout<<"Enter Saving Balance :";
	cin>>SB;
    SavingAccounts S(AIR,SB);
	S.CalculateMonthlyInterest();
	S.ModifyInteresetRate();
	return 0;
}