#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a[1000], i, k;
		cin >> k;
		for (i = 0; i < k; i++)
			cin >> a[i];
		for (i = 0; i < k; i++)
			if (a[i] > 0 and a[i + 1] > 0)
				i++;
				cout << a[i] << " " << a[i + 1];
				break;
		//if (a[i]<0 and a[i+1]<0)
			//cout << a[i] << " " << a[i + 1];

}
