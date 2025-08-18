#include <bits/stdc++.h>
using namespace std;

int searchNearlySorted(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check mid
        if (arr[mid] == target)
            return mid;

        // Check mid-1 if in bounds
        if (mid - 1 >= low && arr[mid - 1] == target)
            return mid - 1;

        // Check mid+1 if in bounds
        if (mid + 1 <= high && arr[mid + 1] == target)
            return mid + 1;

        // Adjust search boundaries (skip two elements)
        if (target < arr[mid])
            high = mid - 2;
        else
            low = mid + 2;
    }
    return -1; // not found
}

int main()
{
    vector<int> arr = {20, 10, 30, 50, 40};
    int target = 10;

    int index = searchNearlySorted(arr, target);
    if (index != -1)
        cout << "Found at index: " << index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
