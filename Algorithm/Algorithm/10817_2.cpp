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
	// �� ���� �ִ밪
	int iL = max(iA, max(iB, iC));

	// �ּҰ� : �� ���� -1�� ���� �� �ִ밪�� ���ϰ� �ٽ� -1�� ���ϸ� �� ���� �ּҰ�
	int iS = -max(-iA, max(-iB, -iC));

	// �� ���� �տ��� �ִ밪�� �ּҰ��� ����.
	cout << iA + iB + iC - iL - iS;
}