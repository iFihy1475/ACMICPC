#include <iostream>
using namespace std;

int main()
{
	int iA, iB, iC;

	cin >> iA >> iB >> iC;

	if (iA == iB && iA == iC)
		cout << iB;
	else if (iA >= iB && iA >= iC) 
	{
		if (iB > iC)
			cout << iB;
		else
			cout << iC;
	}
	else if (iB >= iA && iB >= iC)
	{
		if (iA > iC)
			cout << iA;
		else
			cout << iC;
	}
	else if (iC >= iA && iC >= iB)
	{
		if (iA > iB)
			cout << iA;
		else
			cout << iB;
	}
}