#include <iostream>
using namespace std;

int main()
{
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	printf("%.10f", (double)a / b);
}