#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int A[1000];
	int B[1000];
	int a, b, n;
	cout << "Amount of elements: ";
	cin >> a;
	cout << endl << "Shift on: ";
	cin >> n;
	cout << endl << "Array: ";
	for (int i = 0; i < a; i++) 
	{
		if (n > 0) b = (n % a + i) % a;
		else
		{
			b = (n % a + i) % a;
			b = (a + b) % a;
		}
		cin >> A[i];
		B[b] = A[i];
	}
	for (int i = 0; i < a; i++) 
	{
		cout << B[i];
	}
}