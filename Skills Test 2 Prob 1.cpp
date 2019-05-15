#include <iostream>
#include <conio.h>

using namespace std;


int main()
{    
    float a1, a2, a3;

	cout << "Enter first number:"; cin >> a1;
	cout << "Enter second number:"; cin >> a2;
	cout << "Enter third number:"; cin >> a3;


    if(a1 > a2 && a1 > a3)
    {
        cout << "Largest number: " << a1;
    }

	if(a2 > a1 && a2 > a3)
    {
        cout << "Largest number: " << a2;
    }

	if(a3 > a1 && a3 > a2) {
        cout << "Largest number: " << a3;
	}

	else if (a1==a2 && a1==a3 && a2==a3) {
		cout << "Error ";
	}


_getch();
return 0; 
}