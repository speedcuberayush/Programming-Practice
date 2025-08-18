#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int mini = min(min(x1, x2), x3);
    int maxi = max(max(x1, x2), x3);

    int middle = x1 + x2 + x3 - mini - maxi;
    cout << (middle - mini) + (maxi - middle) << endl;
    return 0;
}