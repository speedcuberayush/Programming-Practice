#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

void cp_solution() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return;

    while (T--) {
        int n;
        cin >> n;
        vector<pair<int64, int64>> seg(n);
        for (int i = 0; i < n; ++i) cin >> seg[i].first >> seg[i].second;

        int64 base = 0;
        for (auto &p : seg) base += (p.second - p.first);

        vector<int64> A(n), R(n);
        int64 totalR = 0;
        for (int i = 0; i < n; ++i) {
            A[i] = seg[i].first + seg[i].second;
            R[i] = seg[i].second;
            totalR += R[i];
        }

        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](int i, int j) { return A[i] < A[j]; });

        vector<int64> A_s(n), R_s(n);
        for (int i = 0; i < n; ++i) {
            A_s[i] = A[idx[i]];
            R_s[i] = R[idx[i]];
        }

        vector<int64> prefA(n);
        if (n > 0) prefA[0] = A_s[0];
        for (int i = 1; i < n; ++i) prefA[i] = prefA[i - 1] + A_s[i];

        int64 best_added = LLONG_MIN;
        if (n % 2 == 0) {
            int m = n / 2;
            int64 sum_small = m > 0 ? prefA[m - 1] : 0;
            best_added = totalR - sum_small;
        } else {
            int m = (n - 1) / 2;
            for (int k = 0; k < n; ++k) {
                int64 sumR_rem = totalR - R_s[k];
                int64 sum_small = 0;
                if (m > 0) {
                    sum_small = (k >= m) ? prefA[m - 1] : prefA[m] - A_s[k];
                }
                best_added = max(best_added, sumR_rem - sum_small);
            }
        }

        int64 answer = base + max<int64>(0, best_added);
        cout << answer << '\n';
    }
}

int main() {
    cp_solution();
    return 0;
}