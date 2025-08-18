#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    string s = "";
    int temp = n;

    while (temp)
    {
        int digit = temp % 10;
        if (temp / 10 == 0) 
            s += digit + '0';
        else
        {
            int swapper = 9 - digit;
            s += (digit > swapper ? swapper + '0' : digit + '0');
        }
        temp /= 10;
    }

    reverse(s.begin(), s.end());
    cout << s;
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}
