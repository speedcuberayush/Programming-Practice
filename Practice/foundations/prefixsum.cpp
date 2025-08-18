#include <bits/stdc++.h>
using namespace std;

// --- Prefix Sum Helper ---
vector<long long> build_prefix(const vector<long long> &arr)
{
    int n = arr.size();
    vector<long long> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];
    return prefix;
}

long long range_sum(const vector<long long> &prefix, int l, int r)
{
    return prefix[r] - (l > 0 ? prefix[l - 1] : 0);
}

// --- Problems to Implement ---
void range_sum_query(const vector<long long> &arr, const vector<long long> &prefix)
{
    // TODO: implement Range Sum Query logic
}

void subarray_sum_equals_k(const vector<long long> &arr, const vector<long long> &prefix)
{
    // TODO: implement Subarray Sum Equals K logic
}

void max_sum_subarray_size_k(const vector<long long> &arr, const vector<long long> &prefix)
{
    // TODO: implement Maximum Sum Subarray of Size K logic
}

void cumulative_frequency_query(const vector<long long> &arr, const vector<long long> &prefix)
{
    // TODO: implement Cumulative Frequency Query logic
}

// --- Main ---
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> prefix = build_prefix(arr);

    // Call whichever function you want:
    range_sum_query(arr, prefix);
    // subarray_sum_equals_k(arr, prefix);
    // max_sum_subarray_size_k(arr, prefix);
    // cumulative_frequency_query(arr, prefix);

    return 0;
}
