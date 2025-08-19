#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int cap = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cap = cap - a + b;
        ans = max(cap, ans);
    }
    cout << ans;
    return 0;
}