#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int _Icount5 = 0 , _Icount3 = 0, result = -1;

	if (N % 5 != 0 && N % 3 != 0) 
	{
		_Icount5 = N / 5;
		N -= (_Icount5 * 5);
		
		if (N % 3 == 0)
		{
			_Icount3 = N / 3;
			result = _Icount5 + _Icount3;
		}
	}
	


	cout << result << endl;
}