#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	int a[1000];
	int a, b;
	cout << "Amount of elements: ";
	cin >> a;
	cout << endl << "Array: ";
	for (int i = 0; i < a; i++) 
	{
		cin >> a[i];
		if (i % 2 == 1)
		{
			b = a[i];
			a[i] = a[i - 1];
			a[i - 1] = b;
		}
	}
	for (int i = 0; i < a; i++) 
	{
		cout << a[i] << " ";
	}
}