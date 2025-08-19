#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    vector<string> arr(5);
    bool flag = 0;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 5; i++)
        if (arr[i][0] == n[0] || arr[i][1] == n[1])
            flag = 1;

    cout << ((flag) ? "YES" : "NO") << endl;
    return 0;
}
