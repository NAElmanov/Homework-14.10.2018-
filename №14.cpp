#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, D, x1, x2;
	cin >> a;
	cin >> b;
	cin >> c;
	D = b * b - 4 * a*c;
	x1 = (-b + sqrt(D)) / 2 * a;
	x2 = (-b - sqrt(D)) / 2 * a;
	cout << x1 << " " << x2;
}
