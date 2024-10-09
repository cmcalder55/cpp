#include "pch.h"
#include <windows.h>
#include <iostream>
using namespace std;

int main()
{ 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	cout << "A nice message I saw in a subway tunnel:" << endl;
	cout << "Listen to the universe" << endl;
	cout << "And Vibes" << endl;
	cout << "And yourself" << endl;
	cout << "Thanks 191st street" << endl;
}
