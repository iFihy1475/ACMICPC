#include <iostream>
using namespace std;

int main()
{
	int iStar;
	cin >> iStar;

	for (int i = iStar; i >= 1; --i)
	{
		for (int j = i; j >= 1; --j)
		{
			printf("*");
		}
		printf("\n");
	}
}