#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int checker(vector<int> &nums, int num, int threshold)
    {
        int sum = 0;
        for (auto &it : nums)
            sum += (it + num - 1) / num;
        return sum <= threshold;
    }

public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int s = 1;
        int e = *max_element(nums.begin(), nums.end());
        while (e >= s)
        {
            int mid = (s + e) / 2;
            if (checker(nums, mid, threshold))
                e = mid - 1;
            else
                s = mid + 1;
        }
        return s;
    }
};