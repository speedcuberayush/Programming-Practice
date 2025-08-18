#include <bits/stdc++.h>
using namespace std;

int ternarySearchIterative(vector<int> &arr, int key)
{
    // implement
    int s = 0;
    int e = arr.size() - 1;
    int mid1 = s + (e - s) / 3;
    int mid2 = e - (e - s) / 3;
    int index = -1;
    while (s <= e)
    {
        if (arr[mid1] == key)
            return mid1;
        if (arr[mid2] == key)
            return mid2;
        if (arr[mid1] > key)
            e = mid1 - 1;
        else if (arr[mid2] > key)
            s = mid2 + 1;
        else
            s = mid1 + 1, e = mid2 - 1;
    }

    return index;
}
// int ternarySearchRecursive(vector<int> &arr, int l, int r, int key)
// {
//     // implement
// }

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 3;

    cout << ternarySearchIterative(arr, key) << "\n";
    // 8,35,000
    // cout << ternarySearchRecursive(arr, 0, arr.size() - 1, key) << "\n";
    // 334900 
}
