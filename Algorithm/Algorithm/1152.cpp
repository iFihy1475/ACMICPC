#include <iostream>
using namespace std;

#define MAX 1000001
int main()
{
    char cArr[MAX];

    cin >> cArr;

    for (int i = 0; cArr[i] != NULL; ++i)
        cout << cArr[i];
}