#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	//INTEGERS
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
	cout << " " << endl;

	//FLOAT
	float height, weight;

	cout << "Let's calculate your BMI. How tall are you in inches?" << endl;
	cin >> height;
	cout << "How much do you weigh in pounds?" << endl;
	cin >> weight;
	cout << "Your BMI is " <<(weight/height/height)*703 << "." << endl;
	cout << " " << endl;
	
	//STRING
	string name, street, town, state, zip, result1, result2, result3, result4;
	
	cout << "Now let's make your mailing address." << endl;
	getline(cin, name);

	cout << "What is your name?" << endl;
	getline(cin, name);

	cout << "What is your street address?" << endl;
	getline(cin, street);

	cout << "What town do you live in?" << endl;
	getline(cin, town);

	cout << "What state?" << endl;
	getline(cin, state);

	cout << "What is your zipcode?" << endl;
	getline(cin, zip);

	result1 = name;
	result2 = street;
	result3 = town + " " + state;
	result4 = zip;
	cout << "Your mailing address is: " << endl;
	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << result4 << endl;
	
	return 0;
}
