#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (all_of(s.begin() + 1, s.end(), ::isupper))
    {
        for (char &c : s)
            c = islower(c) ? toupper(c) : tolower(c);
    }
    cout << s;
}
