#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= 2 * n; i++)
    {
        int k = i <= n ? i : 2 * n - i;
        cout << string(2 * abs(n - i), ' ');
        for (int j = 0; j <= k; j++)
        {
            if (j)
                cout << ' ';
            cout << j;
        }
        for (int j = k - 1; j >= 0; j--)
            cout << ' ' << j;
        cout << '\n';
    }
}
