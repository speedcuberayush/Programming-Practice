#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string result = "YES";
    int count = 0;
    for (auto &i : n) if (i == '4' || i == '7') count++;
    cout << ((count == 4 || count == 7) ? "YES" : "NO") << endl;
    return 0;
}