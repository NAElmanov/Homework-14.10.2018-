
#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	int A = 100, B = 0, C = 0, D = 1;
	for (int i = 0; A != 0; i++) {
		cin >> A;
		if (B == A) C++;
		else C = 0;
		B = A;
		if (D <= C) D = C + 1;
	}
	cout << D;
}