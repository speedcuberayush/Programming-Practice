#include <iostream>
using namespace std;

void prefixXOR(int arr[], int n, int prefXor[])
{
    // Your logic here
    int xorval = arr[0];
    prefXor[0] = xorval;
    for (int i = 1; i < n; i++)
        prefXor[i] = prefXor[i - 1] ^ arr[i];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 2, 8, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefXor[100];

    cout << "Original array: ";
    printArray(arr, n);

    prefixXOR(arr, n, prefXor);
    cout << "Prefix XOR array: ";
    printArray(prefXor, n);

    return 0;
}
