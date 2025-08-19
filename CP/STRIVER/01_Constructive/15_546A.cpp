#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int dollars = 0;

    for (int i = 1; i <= w; i++) dollars += i * k;
    if (n - dollars < 0) cout << abs(n - dollars);
    else cout << 0;
    return 0;
}