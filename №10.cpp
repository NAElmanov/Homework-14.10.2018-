

#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int f(int N);

int main()
{
	int A, N = -1;
	cout << "Enter number : ";
	cin >> A;
	for (int i = 2; f(i) <= A; i++) 
	{
		if (f(i) == A) 
		{
			cout << i + 1;
			N++;
		}
	}
	if (N == -1) cout << N;
}

int f(int N) {
	int A = 0, B = 1, C;
	for (int i = 0; i <= N - 2; i++) 
	{
		C = A + B;
		A = B;
		B = C;
	}
	return (C);
}
