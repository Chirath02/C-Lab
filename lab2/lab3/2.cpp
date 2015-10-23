#include <iostream>
using namespace std;
int main()
{
    int choice;
    float celsius,fahrenheit;
    cout << "1 for Celsius to Fahrenheit conversion." << endl;
    cout << "2 for Fahrenheit to Celsius conversion." << endl;
    cin >> choice;
        switch (choice)
    {
	case 1:
	    cout << "Please enter your temperature in Celsius.\n";	    
	    cin >> celsius;
	    fahrenheit = (((celsius * 9) / 5) + 32);
	    cout << "The temperature in Fahrenheit is " << fahrenheit << ".\n";
	    cout << endl;
	    break;	    
	case 2:
	    cout << "Please enter your temperature in Fahrenheit.\n";
	    cin >> fahrenheit;
	    celsius = ((fahrenheit - 32) * 5) / 9;
	    cout << "The temperature in Celsius is " << celsius << ".\n";
	    break;
	default:
	    cout << "That is not an option!" << endl;
	    cout << "Please close the program and try again." << endl;
	    break;
    }
    return 0;
}