//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <iostream>
using namespace std;
int main()

{
	int A;
	cout << "+---+-------+-------+-------+" << endl;
	for (A = 32; A < 128; A++) {
		cout << "|" << A << "    " << char(A) << "      " << hex << A << "      " << oct << A << endl;
		cout << "+---+-------+-------+-------+" << endl;
	};

	cin.get();
	cin.get();
}