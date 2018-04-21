#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int _Icount5 = 0 , _Icount3 = 0;

	if (N >= 5) 
	{
		_Icount5 = N / 5;
		N =- (5 * _Icount5);
	}	
	
	if (N >= 3)
	{
		_Icount3 = N / 3;
		N -= (3 * _Icount3);
	}
	


	cout << _Icount5 + _Icount3 << endl;
}