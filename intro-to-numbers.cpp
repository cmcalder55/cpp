#include "pch.h"
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int x;
	int y;
	int sum, difference, product, quotient;
	
    cout << "Give me two numbers." << endl; 
	cin >> x; 
	cin >> y; 

	sum = x + y;
	difference = x - y;
	product = x * y; 
	quotient = x / y;

	cout << "Here you go!" << endl;
	cout << " " << endl; 
	cout << "The sum is " << sum << "." << endl;
	cout << "The difference is " << difference << "." << endl;
	cout << "the product is " << product << "." << endl;
	cout << "the quotient is " << quotient << "." << endl;

	return 0;
}
