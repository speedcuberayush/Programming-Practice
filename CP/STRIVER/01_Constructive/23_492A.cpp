#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;
    long long used = 0; 
    long long next = 1; 
    while (used + next <= n) {
        used += next;
        height++;
        next = (long long)(height + 1) * (height + 2) / 2;
    }

    cout << height << "\n";
    return 0;
}
