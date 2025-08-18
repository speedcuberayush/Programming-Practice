#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> &x, pair<int, int> &y)
{
    return (x.second != y.second) ? (x.second > y.second) : (x.first < y.first);
}

vector<int> sortByFrequency(vector<int> &arr)
{
    // implement
    unordered_map<int, int> mpp;

    for (auto i : arr)
        mpp[i]++;

    vector<pair<int, int>> main;
    for (auto j : mpp)
        main.push_back(make_pair(j.first, j.second));

    vector<int> result;
    sort(main.begin(), main.end(), compare);
    for (auto i : main)
        for (int j = 0; j < i.second; j++)
            result.push_back(i.first);
    return result;
}

int main()
{
    vector<int> arr = {4, 5, 6, 5, 4, 3};
    vector<int> sortedArr = sortByFrequency(arr);
    for (int x : sortedArr)
        cout << x << " ";
    cout << endl;
    return 0;
}
