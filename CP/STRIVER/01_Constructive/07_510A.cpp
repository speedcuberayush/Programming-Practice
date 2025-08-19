#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;

    // snake #
    // no snake .
    int flag = 0;
    for (int i = 0; i < r; i++)
    {
        // Set
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
                cout << "#";
            cout << endl;
        }
        else
        {
            // odd
            if (flag == 0)
            {

                for (int j = 0; j < c - 1; j++)
                    cout << ".";
                cout << "#";
                flag = 1;
                cout << endl;
            }

            else
            {
                flag = 0;
                // even
                cout << "#";
                for (int j = c - 1; j > 0; j--)
                    cout << ".";
                cout << endl;
            }
        }
        // ReSet
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int r, c; cin >> r >> c;
//     for (int i = 0; i < r; i++)
//         cout << (i % 2 == 0 ? string(c, '#') : 
//                 (i % 4 == 1 ? string(c - 1, '.') + "#" : "#" + string(c - 1, '.')))
//              << '\n';
// }
