#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 1;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxi = 1;
    int i = 0;
    int j = 1;
    int length = 1;
    for (int j = 1; j < n; j++)
    {
        if (arr[j - 1] < arr[j])
            length++;
        else
        {
            maxi = max(maxi, length);
            length = 1;
        }
    }
    maxi = max(maxi, length);
    cout << maxi;
}
