#include "pch.h"
#include <iostream>

using namespace std;

int st(int a, int b);

int main()
{
	int A[1000];
	int a, b = 0;
	cin >> a;
	for (int i = 0; i < a; i++) 
	{
		cin >> A[i];
		b = b + A[i] * st(10, a - i);
	}
	b = b / 10 + 1;
	cout << b << endl;
	for (int i = 0; i < a; i++) 
	{
		A[i] = b / st(10, a - i - 1);
		b = b % st(10, a - i - 1);
		cout << A[i] << " ";
	}
}
int st(int a, int b) 
{
	int k = a;
	for (int i = 0; i < b - 1; i++) 
	{
		k = k * a;
	}
	if (b == 0) k = 1;
	return k;
}