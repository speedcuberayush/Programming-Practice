// The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr(5, vector<int>(5));
    pair<int, int> ones;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                ones = {i, j};
        }
    int moves = 0;
    int col = ones.second;
    int row = ones.first;
    moves += abs(row - 2);
    moves += abs(col - 2);
    cout << moves;
    return 0;
}