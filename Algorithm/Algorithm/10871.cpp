#include <iostream>
using namespace std;

#define MAX 10000
int main()
{
	int iN, iX, iArr[MAX];

	cin >> iN >> iX;

	for (int i = 0; i < iN; ++i)
		cin >> iArr[i];

	for (int i = 0; i < iN; ++i)
	{
		if (iArr[i] < iX)
			cout << iArr[i] << " ";
	}
}