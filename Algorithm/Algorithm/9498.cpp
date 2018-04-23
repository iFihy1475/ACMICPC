#include <iostream>
using namespace std;

int main()
{
	int iNum;

	cin >> iNum;

	if (iNum >= 90 && iNum <= 100)
		cout << 'A';
	else if (iNum >= 80 && iNum < 90)
		cout << 'B';
	else if (iNum >= 70 && iNum < 80)
		cout << 'C';
	else if (iNum >= 60 && iNum < 70)
		cout << 'D';
	else
		cout << 'F';
}