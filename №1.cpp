#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int v, t, l, s;
	cin >> v;
	cin >> t;
	if (v > 0) 
	{
		l = v * t;
		s = l % 109;
	}
	else 
	{
		l = v * t;
		s = l % 109;
		s = 109 + s;
	}
	cout << s;
}
