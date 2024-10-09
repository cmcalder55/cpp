#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void printGreeting() {
	cout << "Hope you're having a good day! Let's do some math." << endl;
}

void divideNumbers(float x, float y) {
	if (y == 0) {
		cout << "Cannot perform division if denominator is 0." << endl;
	}
	else {
		float result = x / y;
		cout << x << " / " << y << " = " << result << endl;
	}
}

int factorial(int num) {
	if (num < 0) {
		return 0;
	}
	else {
		int result = 1;
		while (num > 1) {
			result *= num;
			num--;
		}
		return result;
	}
}

void fibonacci(int N) {
	if (N <= 0) {
		cout << "Number of terms in sequence request was 0" << endl;
	}
	else {
		int a = 0;
		int b = 1;
		int c;

		if (N == 1) {
			cout << "Fibonacci up to " << N << " term(s): " << a << endl;
		}
		else if (N == 2) {
			cout << "Fibonacci up to " << N << " term(s): " << a << ", " << b << endl;
		}
		else {
			cout << "Fibonacci up to " << N << " term(s): " << a << ", " << b;
			N -= 2;
			while (N >= 1) {
				c = a + b;
				a = b;
				b = c;
				N--;
				cout << ", " << to_string(c);
			}
		}
		cout << endl;
	}
}

int main() {
	// Function 1
	cout << "Function 1: Greeting" << endl;
	printGreeting();
	cout << endl;

	// Function 2
	cout << "Function 2: Division" << endl;
	divideNumbers(10, 3);
	divideNumbers(12, 4);
	divideNumbers(35.5, 1.5);
	divideNumbers(0, 12);
	divideNumbers(12, 0);
	cout << endl;

	// Function 3
	cout << "Function 3: Factorial" << endl;
	cout << "Your factorial (0!) calculated to: " << factorial(0) << endl ;
	cout << "Your factorial (1!) calculated to: " << factorial(1) << endl ;
	cout << "Your factorial (2!) calculated to: " << factorial(2) << endl ;
	cout << "Your factorial (5!) calculated to: " << factorial(5) << endl ;
	cout << "Your factorial (10!) calculated to: " << factorial(10) << endl;
	cout << endl;

	// Function 4
	cout << "Function 4: Fibonacci" <<  endl;
	fibonacci(0);
	fibonacci(1);
	fibonacci(2);
	fibonacci(5);
	fibonacci(10);
	fibonacci(20);
	fibonacci(30);

	return 0;
	
}
