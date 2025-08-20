#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (m % n != 0)
    {
        cout << -1;
        return 0;
    }

    int div = m / n;
    int ans = 0;

    while (div % 2 == 0)
    {
        div /= 2;
        ans++;
    }

    while (div % 3 == 0)
    {
        div /= 3;
        ans++;
    }
    if (div == 1) cout << ans;
    else cout << -1;

    return 0;
}
