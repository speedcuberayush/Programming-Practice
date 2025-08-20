#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    string output = "";
    for (auto &i : input)
    {
        i = tolower(i);
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y')
            continue;

        output += '.';
        output += i;
    }
    cout << output;
    return 0;
}