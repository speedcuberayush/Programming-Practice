#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b) cout << 1;
    else
    {
        int year = 0;
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            year++;
        }
        cout << year;
    }
    return 0;
}