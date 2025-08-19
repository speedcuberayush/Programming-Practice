    #include <bits/stdc++.h>
    using namespace std;

    int solve(string input)
    {
        if (input == "X++" || input == "++X")
            return 1;
        else if (input == "X--" || input == "--X")
            return -1;
        return 0; 
    }

    int main()
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            string input;
            cin >> input;
            ans += solve(input); 
        }
        cout << ans;
        return 0;
    }
