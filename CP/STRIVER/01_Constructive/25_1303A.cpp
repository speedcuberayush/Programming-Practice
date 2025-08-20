#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int left = s.find('1');
        int right = s.rfind('1');
        if (left == string::npos) {
            cout << 0 << "\n";
        } else {
            int count = 0;
            for (int i = left; i <= right; i++) {
                if (s[i] == '0') count++;
            }
            cout << count << "\n";
        }
    }
    return 0;
}
