#include <iostream>
using namespace std;

int main()
{
	int iStar;
	cin >> iStar;

	for (int i = 1; i <= iStar; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}