#include <iostream>
using namespace std;

#define MAX 1001

int main()
{
    int iN, iM, iArr[MAX];

    cin >> iN;

    for (int i = 0; i < iN; ++i)
    {
        cin >> iArr[i];
    }

    iM = iArr[0];

    for (int i = 1; i < iN; ++i)
    {
        if (iM < iArr[i])
            iM = iArr[i];
    }
    double dRes = 0;

    for (int i = 0; i < iN; ++i)
    {
        dRes += ((double)iArr[i] / iM) * 100;
    }

    printf("%.2lf", dRes / (double)iN);

    return 0;
}