#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n)
{
    // Your logic here
    int key = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = key;
}

void rightRotateByOne(int arr[], int n)
{
    // Your logic here
    int key = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = key;
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
    int arr1[100] = {10, 20, 30, 40, 50};
    int arr2[100] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Initial array: ";
    printArray(arr1, n);

    // Test case 1: Left rotate by 1
    leftRotateByOne(arr1, n);
    cout << "After left rotation by 1: ";
    printArray(arr1, n);

    // Test case 2: Right rotate by 1
    rightRotateByOne(arr2, n);
    cout << "After right rotation by 1: ";
    printArray(arr2, n);

    return 0;
}
