
#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int st(int n, int m);

int main()
{
	int A, B = 0, C = 0, V = 0, S = 0;
	cout << "Enter number: ";
	cin >> A;
	V = A;
	if (A < 0) B = A * (-1);
	else B = A;
	do {
		B = B / 10;
		C++;
	} while (B > 0);
	B = 0;
	if (A < 0) S = A * (-1);
	else S = A;
	for (int i = 0; S > 0; i++) {
		B = B + ((S % 10) * st(10,C - i - 1));
		S = S / 10;
	}
	if (V < 0) cout << (B * (-1));
	else cout << B;
}
int st(int n, int m) {
	int A = 1;
	for (int i = 0; i < m; i++) {
		A = A * n;
	}
	return A;
}

