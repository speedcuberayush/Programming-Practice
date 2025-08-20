#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    // if ((int)s.size() != n * n)
    //     return cout << -1, 0;

    unordered_map<char, int> f;
    for (char c : s)
        f[c]++;

    string base;
    for (auto [c, cnt] : f)
    {
        if (cnt % n)
            return cout << -1, 0;
        base.append(cnt / n, c);
    }

    string ans;
    while (n--)
        ans += base;
    cout << ans;
}
