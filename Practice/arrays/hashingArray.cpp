#include <bits/stdc++.h>
using namespace std;
void traverse(vector<int> arr)
{
    for (auto &i : arr)
        cout << i << " ";
    cout << endl;
}
/* ---------------------------
   1. Count frequency of elements
--------------------------- */
void countFrequency(vector<int> &arr)
{
    // TODO: Implement
    unordered_map<int, int> mpp;
    for (auto &i : arr)
        mpp[i]++;

    for (auto &j : mpp)
        cout << j.first << " -> " << j.second << endl;
    traverse(arr);
}

/* ---------------------------
2. Find first element with frequency 1
--------------------------- */
int firstUniqueElement(vector<int> &arr)
{
    // TODO: Implement
    return -1; // If none found
}

/* ---------------------------
3. Find duplicates
--------------------------- */
vector<int> findDuplicates(vector<int> &arr)
{
    // TODO: Implement
    unordered_map<int, int> mpp;
    for (auto &i : arr)
        mpp[i]++;

    vector<int> result;
    for (auto &j : mpp)
        if (j.second != 1)
            result.push_back(j.first);

    traverse(result);

    return result;
}

/* ---------------------------
4. Intersection of two arrays
--------------------------- */
vector<int> intersectionArrays(vector<int> &a, vector<int> &b)
{
    // TODO: Implement
    return {};
}

/* ---------------------------
   5. Union of two arrays
--------------------------- */
vector<int> unionArrays(vector<int> &a, vector<int> &b)
{
    // TODO: Implement
    return {};
}

/* ---------------------------
   6. Two Sum
--------------------------- */
bool twoSum(vector<int> &arr, int target)
{
    // TODO: Implement
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        int find = abs(target - arr[i]);
        if (mpp.find(find) == mpp.end())
            mpp[i] = arr[i];
        else
            return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Sample test
    vector<int> arr = {1, 2, 3, 2, 1, 4};
    vector<int> arr2 = {3, 4, 5};

    cout << "\n1. Frequency Count:\n";
    countFrequency(arr);

    cout << "\n2. First Unique Element: ";
    cout << firstUniqueElement(arr) << "\n";

    cout << "\n3. Duplicates: ";
    for (int x : findDuplicates(arr))
        cout << x << " ";
    cout << "\n";

    cout << "\n4. Intersection: ";
    for (int x : intersectionArrays(arr, arr2))
        cout << x << " ";
    cout << "\n";

    cout << "\n5. Union: ";
    for (int x : unionArrays(arr, arr2))
        cout << x << " ";
    cout << "\n";

    cout << "\n6. Two Sum (target=6): ";
    cout << (twoSum(arr, 6) ? "Yes" : "No") << "\n";

    return 0;
}
