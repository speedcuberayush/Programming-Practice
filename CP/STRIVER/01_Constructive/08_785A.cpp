#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    unordered_map<string, int> mpp = {
        {{"Tetrahedron", 4},
         {"Cube", 6},
         {"Octahedron", 8},
         {"Dodecahedron", 12},
         {"Icosahedron", 20}}};

    while (n--)
    {
        string temp;
        cin >> temp;
        ans += mpp[temp];
    }
    cout << ans;
    return 0;
}