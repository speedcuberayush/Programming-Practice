#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string input;
        cin >> input;

        vector<string> parts;

        int n = input.size();
        for (int i = 0; i < n; i++)
        {
            if (input[i] != '0')
            {
                string val = string(1, input[i]);
                val.append(n - i - 1, '0');
                parts.push_back(val);
            }
        }

        cout << parts.size() << endl;
        for (string &x : parts)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
