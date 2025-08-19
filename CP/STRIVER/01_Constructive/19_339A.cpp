#include <bits/stdc++.h>
using namespace std;
int main() {
    string n; 
    cin >> n;
    vector<char> temp;

    for (int i = 0; i < n.size(); i += 2) 
        temp.push_back(n[i]);

    sort(temp.begin(), temp.end());

    for (int i = 0; i < temp.size(); i++) {
        if (i) cout << "+";   
        cout << temp[i];
    }
    return 0;
}
