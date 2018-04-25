#include <iostream>
using namespace std;

int main()
{
    // 한 글자만 바꿔라
    // 1) 조건식 i < n 을 -i < n 으로
    // 2) i--을 n--로
    // 3) ETC ..
    int i, n = 20;
    for (i = 0; i < n; i--)
    {
        cout << "-";
    }
}