#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string t;
        cin >> t;
        int digit = t[0] - '0';
        int len = t.size();
        int sum = 0;
        for (int i = 1; i <= len; i++)
            sum += i;

        while (digit > 1)
        {
            digit--;
            sum += 10;
        }
        cout << sum << endl;
    }
    return 0;
}