#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int f(int n);
int main()
{
	cout << "Enter number : ";
	int A;
	cin >> A;
	cout << f(A - 1);
}
int f(int n) {
	int A = 0, B = 1, C;
	for (int i = 0; i <= n - 2; i++) {
		C = A + B;
		A = B;
		B = C;
	}
	return (C);
}

