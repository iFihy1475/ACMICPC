#include <iostream>
#include <algorithm>

using namespace std;

#define NUM 3 

int main()
{
	int iArr[NUM];

	for (int i = 0; i < NUM; ++i)
		cin >> iArr[i];
	sort(iArr, iArr + NUM);

	cout << iArr[1];
}