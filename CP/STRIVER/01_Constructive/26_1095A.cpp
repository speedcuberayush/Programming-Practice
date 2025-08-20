#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string input;
    cin >> input;

    string decrypt = "";
    int index = 0, step = 1;

    while (index < n) {
        decrypt += input[index];
        index += step;
        step++;
    }

    cout << decrypt << "\n";
    return 0;
}
