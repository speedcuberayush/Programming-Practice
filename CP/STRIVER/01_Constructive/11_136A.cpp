#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i]--;
    }
    vector<int> res(n);
    int count = 1;
    for (auto &i : arr)
        res[i] = count++;

    for (auto &i : res)
        cout << i << " ";
    return 0;
}