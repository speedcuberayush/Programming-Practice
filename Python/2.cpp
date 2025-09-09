#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> g(k);
        for (auto &x : g)
            cin >> x;
        if (m == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        unordered_set<int> win = {1};
        for (int p = 2; p <= n; p++)
        {
            unordered_set<int> cur;
            bool turn = (n - p) % 2 == 0;
            for (int s = 0; s < (1 << p); s++)
            {
                if ((turn && any_of(g.begin(), g.end(), [&](int i)
                                    { int ns = (s & ((1<<(i-1))-1)) | ((s>>i)<<(i-1)); return i <= p && win.count(ns); })) ||
                    (!turn && all_of(g.begin(), g.end(), [&](int i)
                                     { int ns = (s & ((1<<(i-1))-1)) | ((s>>i)<<(i-1)); return i > p || win.count(ns); })))
                    cur.insert(s);
            }
            win = move(cur);
        }
        long long r = 1, b = 2, e = n;
        for (b %= MOD; e; e >>= 1, b = b * b % MOD)
            if (e & 1)
                r = r * b % MOD;

        cout << (r + win.size()) % MOD << "\n";
    }
}
