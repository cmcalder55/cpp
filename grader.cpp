#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float hw1, hw2, hw3, hw4, hw5, hw6, mt1, mt2, fs, grade;

	cout << "What did you get on your last six homeworks?" << endl;
	cin >> hw1;
	cin >> hw2;
	cin >> hw3;
	cin >> hw4;
	cin >> hw5; 
	cin >> hw6;

	cout << "What about your midterms?" << endl;
	cin >> mt1;
	cin >> mt2;
	cout << "And your final?" << endl;
	cin >> fs;

	grade = (((hw1 + hw2 + hw3 + hw4 + hw5 + hw6)/6)*0.4) + (((mt1 + mt2)/2)*0.4) + fs * 0.2;
	if (grade > 90) {
		cout << "Congrats!" << endl;
		cout << "You got an A." << endl;
	}
	else if (grade > 80 && grade <= 90) {
		cout << "You got a B!" << endl;

	}
	else if (grade > 70 && grade <= 80) {
		cout << "That's a C." << endl;
	}

	else {
		cout << "Too bad... that's a D." << endl;
	}
	system("pause");
}
