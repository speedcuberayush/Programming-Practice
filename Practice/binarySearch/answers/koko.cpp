#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool checker(vector<int> &piles, int x, int h)
    {
        long long total = 0;
        for (int i = 0; i < piles.size(); i++)
            total += (piles[i] + x - 1) / x;
        return total <= h;
    }

public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1, high = *max_element(piles.begin(), piles.end()), ans = high;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (checker(piles, mid, h)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
