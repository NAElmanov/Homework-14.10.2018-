

#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int st(int n, int m);

int main()
{

	int A, B, C, D, E, F, V = 1;
	C = 0;
	cout << "Enter number : ";
	cin >> A;
	B = A;
	do {
		B = B / 10;
		C++;
	   } while (B > 0);
	B = A;
	F = A;
	for (int i = 1; i <= C; i++) 
	{
		D = B % 10;
		B = B / 10;
		E = F / st(10, C - i);
		F = F % st(10, C - i);
		if (E != D) 
		{
			cout << "FALSE";
			V = 42;
			break;
		}
	}
	if (V == 1) cout << "TRUE";
}

int st(int n, int m) 
{
	int a = 1;
	for (int i = 0; i < m; i++) 
	{
		a = a * n;
	}
	return a;
}
