#include <bits/stdc++.h>
using namespace std;

// Standard Binary Search
int binarySearch(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // TODO: implement
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// First Occurrence
int firstOccurrence(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int left = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // TODO: implement
        if (arr[mid] == target)
        {
            left = mid;
            high = mid - 1;
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return left;
}

// Last Occurrence
int lastOccurrence(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int right = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // TODO: implement
        if (arr[mid] == target)
        {
            right = mid;
            low = mid + 1;
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return right;
}

// Lower Bound
int lowerBound(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    // TODO: implement
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // TODO: implement
        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return ans ? ans : low;
}

// Upper Bound
int upperBound(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // TODO: implement
        if (arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return ans ? ans : high;
    // TODO: implement
    return -1;
}



int main()
{
    //                 0  1  2  3  4  5  6  7
    vector<int> arr = {1, 2, 4, 4, 4, 5, 7, 9};
    int target = 4;

    cout << "Binary Search: " << binarySearch(arr, target) << endl;
    cout << "First Occurrence: " << firstOccurrence(arr, target) << endl;
    cout << "Last Occurrence: " << lastOccurrence(arr, target) << endl;
    cout << "Lower Bound: " << lowerBound(arr, target) << endl;
    cout << "Upper Bound: " << upperBound(arr, target) << endl;

    return 0;
}
