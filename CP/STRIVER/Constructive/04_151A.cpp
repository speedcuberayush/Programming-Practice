#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalLiters = k * l;
    int slices = c * d;
    int totalsalt = p;
    int slice = 0;

    int literRequirement = totalLiters / nl;
    int saltRequirement = totalsalt / np;
    int ans = min(min(literRequirement, saltRequirement), slices) / n;
    cout << ans;

    return 0;
}