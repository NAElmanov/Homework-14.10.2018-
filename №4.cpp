#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a[1000], i, k, t, l = 1;
	cin >> k;
	for (i = 0; i < k; i++)
		cin >> a[i];
	t = a[0];
	for (i = 0; i < k; i++)
	{
		if (a[i] > t)
		{
			t = a[i];
			l++;
		}
	}
	cout << l;

}
