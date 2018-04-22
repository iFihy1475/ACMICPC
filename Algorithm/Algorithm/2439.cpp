#include <iostream>
using namespace std;

int main()
{
	int iStar;
	cin >> iStar;

	for (int i = 1; i <= iStar; ++i)
	{
		for (int j = iStar; j > i; --j)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; ++k)
		{
			printf("*");
		}
		printf("\n");
	}
}