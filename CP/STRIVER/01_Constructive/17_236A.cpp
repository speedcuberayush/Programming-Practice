#include <bits/stdc++.h>
using namespace std;
int main() {
    string n; cin >> n;
    cout << (set<char>(n.begin(), n.end()).size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
}
