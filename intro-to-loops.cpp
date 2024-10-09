#include "pch.h"
#include <iostream>
using namespace std;

int for_loop()
{
	int count;
	float total = 0;
	float num;
	float max = 0;
	float min = 0;

	for (int count=0; count<10; count++)
	{
		float num = 0;
		cout << "Enter ten integers. " << endl;
		cin >> num;
		total += num;

		if (num > max)
			max = num;

		if (num < min)
			min = num;
	}
	cout << "The sum is " << total << "." << endl;
	cout << "The max value is " << max << "." << endl;
	cout << "The minimum value is " << min << "." << endl;

	return 0;
}

int while_loop()
{
	double max, min;
	double sum = 0;
	double num = 0;
	int i = 0;

	while (num != -1)
	{
		cout << "Enter values for their sum, min, and max. Enter -1 when you're done." << endl;
		cin >> num;
		if (i == 0)
		{
			max = num;
			min = num;
		}
		if (num != -1)
		{
			sum = sum + num;
			if(num>max)
			{
				max = num;
			}
			if (num < min)
			{
				min = num;
			}
		}
		i++;
	}
	cout << "The sum of the " << i << " values entered is " << sum<< "."<< endl;
	cout << "The minimum of the " << i << " values entered is " << min<< "."<< endl;
	cout << "The maximum of the " << i << " values entered is " << max<< "." << endl;

	return 0;
}
