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
	cout << endl << "Array: ";
	for (int i = 0; i < a; i++) 
	{
		cin >> A[i];
	}
	for (int i = 0; i < a; i++) 
	{
		b = A[i];
		n = 0;
		for (int c = 0; c < a; c++) 
		{
			if (b == A[c]) n++;
			if (n >= 2) break;
		}
		if (n == 1) cout << A[i] << " ";
	}
}