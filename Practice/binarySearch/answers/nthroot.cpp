class Solution
{
    int solve(int x, int time)
    {
        int res = 1;
        for (int i = 0; i < time; i++)
            res *= x;
        res;
    }

public:
    int nthRoot(int n, int m)
    {
        // Code here
        int low = 0;
        int high = m;
        while (high >= low)
        {
            int mid = (low + high) / 2;
            int value = solve(mid, n);
            if (value == m)
                return value;
            else if (value < m)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};