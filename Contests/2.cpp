#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

const ull MOD = (1ULL << 64) - 1, BR = 911382323, BC = 972663749;

vector<ull> pw(int n, ull b)
{
    vector<ull> p(n + 1, 1);
    for (int i = 1; i <= n; i++)
        p[i] = (p[i - 1] * b) & MOD;
    return p;
}

vector<vector<ull>> pref2d(const vector<string> &g, const vector<ull> &pr, const vector<ull> &pc)
{
    int n = g.size(), m = g[0].size();
    vector<vector<ull>> pref(n + 1, vector<ull>(m + 1));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            ull v = g[i][j];
            ull add = ((v * pr[i]) & MOD) * pc[j] & MOD;
            pref[i + 1][j + 1] = (pref[i][j + 1] + pref[i + 1][j] - pref[i][j] + add) & MOD;
        }
    return pref;
}

ull get(const vector<vector<ull>> &p, int r, int c, int nr, int mc)
{
    int x2 = r + nr - 1, y2 = c + mc - 1;
    return (p[x2 + 1][y2 + 1] - p[r][y2 + 1] - p[x2 + 1][c] + p[r][c]) & MOD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> g(n), r(n);
        for (int i = 0; i < n; i++)
            cin >> g[i];
        for (int i = 0; i < n; i++)
        {
            r[n - 1 - i] = g[i];
            reverse(r[n - 1 - i].begin(), r[n - 1 - i].end());
        }
        auto pr = pw(n, BR), pc = pw(m, BC);
        auto p1 = pref2d(g, pr, pc), p2 = pref2d(r, pr, pc);
        long long ans = 1LL * (2 * n) * (2 * m);
        for (int nr = 1; nr <= n; nr++)
            for (int mc = 1; mc <= m; mc++)
            {
                long long N = 2 * n - nr, M = 2 * m - mc, need = N * M - 1LL * n * m;
                if (need >= ans)
                    continue;
                bool ok = 0;
                for (int r0 : {0, n - nr})
                {
                    int r0p = n - nr - r0;
                    for (int c0 : {0, m - mc})
                    {
                        int c0p = m - mc - c0;
                        ull h1 = get(p1, r0, c0, nr, mc), h2 = get(p2, r0p, c0p, nr, mc);
                        ull x = (h1 * ((pr[r0p] * pc[c0p]) & MOD)) & MOD;
                        ull y = (h2 * ((pr[r0] * pc[c0]) & MOD)) & MOD;
                        if (x == y)
                        {
                            ok = 1;
                            break;
                        }
                    }
                    if (ok)
                        break;
                }
                if (ok)
                    ans = need;
            }
        cout << ans << "\n";
    }
}
