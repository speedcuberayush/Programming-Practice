#include <iostream>
using namespace std;

void prefixMin(int arr[], int n, int prefMin[])
{
    // Your logic here
    int mini = arr[0];
    prefMin[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
        prefMin[i] = mini;
    }
}

void prefixMax(int arr[], int n, int prefMax[])
{
    // Your logic here
    int maxi = arr[0];
    prefMax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
        prefMax[i] = maxi;
    }
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
    int prefMin[100], prefMax[100];

    cout << "Original array: ";
    printArray(arr, n);

    prefixMin(arr, n, prefMin);
    cout << "Prefix min array: ";
    printArray(prefMin, n);

    prefixMax(arr, n, prefMax);
    cout << "Prefix max array: ";
    printArray(prefMax, n);

    return 0;
}
