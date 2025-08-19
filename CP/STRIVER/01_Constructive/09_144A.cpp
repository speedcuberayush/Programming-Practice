#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int maxiInd = 0;
    for (int i = 1; i < n; i++) if (arr[i] > arr[maxiInd]) maxiInd = i;

    int miniInd = 0;
    for (int i = 1; i < n; i++) if (arr[i] <= arr[miniInd])
            miniInd = i;

    int moves = maxiInd + (n - 1 - miniInd);
    if (maxiInd > miniInd)
        moves--; 
    cout << moves;
    return 0;
}
