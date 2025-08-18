#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr, int s, int e)
{
    if (s <= e)
    {
        int i = s - 1;
        for (int j = s; j < e; j++)
            if (arr[j] < arr[e])
                swap(arr[++i], arr[j]);
        swap(arr[++i], arr[e]);

        sort(arr, s, i - 1);
        sort(arr, i + 1, e);
    }
}
void insertion(vector<int> &arr)
{
    sort(arr, 0, arr.size() - 1);
}


void traverse(vector<int> &arr)
{
    for (auto &i : arr)
        cout << i << " ";
    cout << endl;
}
int main()
{
    vector<int> arr = {9, 7, 2, 4, 1};
    traverse(arr);
    insertion(arr);
    traverse(arr);

    return 0;
}