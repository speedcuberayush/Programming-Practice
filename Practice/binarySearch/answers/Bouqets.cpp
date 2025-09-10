#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool check(vector<int> &bloomDay, int days, int k, int m)
    {
        int bouquets = 0, consecutive = 0;
        for (int x : bloomDay)
        {
            if (x <= days)
            {
                consecutive++;
                if (consecutive == k)
                {
                    bouquets++;
                    consecutive = 0;
                }
            }
            else consecutive = 0;
        }
        return bouquets >= m;
    }

public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        if ((long long)m * k > bloomDay.size()) return -1;
        int s = *min_element(bloomDay.begin(), bloomDay.end());
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (check(bloomDay, mid, k, m))
                e = mid - 1;
            else
                s = mid + 1;
        }
        return s;
    }
};
