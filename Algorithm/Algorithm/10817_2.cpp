#include <iostream>
using namespace std;

int max(int iA, int iB)
{
	if (iA > iB)
		return iA;
	return iB;
}

int main()
{
	int iA, iB, iC;
	cin >> iA >> iB >> iC;
	// 세 수의 최대값
	int iL = max(iA, max(iB, iC));

	// 최소값 : 세 값에 -1를 곱한 후 최대값을 구하고 다시 -1를 구하면 그 값이 최소값
	int iS = -max(-iA, max(-iB, -iC));

	// 세 수의 합에서 최대값과 최소값을 뺀다.
	cout << iA + iB + iC - iL - iS;
}