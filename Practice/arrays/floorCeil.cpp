#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &arr, int x)
{
    int n = arr.size();

    int floorVal = -1; // store floor here
    int ceilVal = -1;  // store ceil here

    // TODO: Implement binary search logic
    // Hint:
    // - While searching, if arr[mid] <= x → update floorVal, move right
    // - If arr[mid] >= x → update ceilVal, move left
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == x)
        {
            floorVal = mid;
            break;
        }
        else if (arr[mid] > x)
        {
            s = mid + 1;
            floorVal = mid;
        }
        else

            e = mid - 1;
    }
    if (floorVal == -1)
        floorVal = s;

    s = 0;
    e = arr.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == x)
        {
            ceilVal = mid;
            break;
        }
        else if (arr[mid] > x)
            e = mid - 1;
        else
        {
            ceilVal = mid;
            s = mid + 1;
        }
    }

    if (ceilVal == -1)
        ceilVal = e;

    return {ceilVal, floorVal};
}

int main()
{
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x = 5;

    pair<int, int> ans = getFloorAndCeil(arr, x);
    cout << ans.first << " " << ans.second << endl; // Expected: 4 7

    return 0;
}
