#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool checkAnswer(vector<int> &stalls, int gap, int cows)
    {
        int lastPos = stalls[0];
        int count = 1;

        for (int i = 1; i < stalls.size(); i++)
        {
            if (stalls[i] - lastPos >= gap)
            {
                count++;
                lastPos = stalls[i];
            }
            if (count >= cows) return true;
        }
        return false;
    }

public:
    int aggressiveCows(vector<int> &stalls, int k)
    {
        sort(stalls.begin(), stalls.end());
        int s = 0;
        int e = stalls.back() - stalls[0];

        int ans = 0;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (checkAnswer(stalls, mid, k))
            {
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        return ans;
    }
};
