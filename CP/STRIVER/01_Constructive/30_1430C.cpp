#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;   

        vector<pair<int, int>> ops;
        int current = n;
        for (int i = n - 1; i >= 1; i--)
        {
            ops.push_back({current, i});
            current = (current + i + 1) / 2;
        }

        cout << current << "\n";
        for (auto &p : ops)
        {
            cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}
