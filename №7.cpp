#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int H, A, B, i=0, k=0;
	cin >> H;
	cin >> A;
	cin >> B;
	do 
	{
		k = k + A;
		if (k >= H)
		{
			i++;
				break;
		}
		else
		{
			k = k - B;
			i++;
		}
	} while (k <= H);
	cout << i;
	cin.get();
	cin.get();
}