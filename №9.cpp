#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A[1000];
	int q, w, e, r, t;
	cout << "Amount of pins: ";
	cin >> q;
	for (int i = 0; i < q; i++) 
	{
		A[i] = "I";
	}
	cout << "Amount of balls: ";
	cin >> e;
	for (int i = 0; i < e; i++) 
	{
		cout << "l, r: ";
		cin >> r >> t;
		for (int m = r - 1; m < t; m++) 
		{
			A[m] = ".";
		}
	}
	for (int i = 0; i < q; i++) 
	{
		cout << A[i];
	}
}