#include <bits/stdc++.h>
using namespace std;
class Solution
{

    int checker(vector<int> &nums, int capacity, int k)
    {
        int total = 0;
        int count = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (capacity <= total + nums[i])
                total += nums[i];
            else
            {
                count++;
                total = nums[i];
            }
        }
        return count;
    }

public:
    int splitArray(vector<int> &nums, int k)
    {
        int s = *max_element(nums.begin(), nums.end());
        int e = accumulate(nums.begin(), nums.end(), 0);
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (checker(nums, mid, k) > k)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return s;
    }
};