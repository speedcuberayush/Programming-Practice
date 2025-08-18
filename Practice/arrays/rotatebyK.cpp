#include <iostream>
using namespace std;

void reverse(int arr[], int s, int e)
{
    while (s < e)
        swap(arr[s++], arr[e--]);
}

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

void leftRotateByK(int arr[], int n, int k)
{
    // Your logic here
    // // approach 1 : call k times
    // while (k)
    // {
    //     leftRotateByOne(arr, n);
    //     k--;
    // }

    // // approach 2 : temp array
    // int *temp = new int[k];
    // for (int i = 0; i < k; i++)
    //     temp[i] = arr[i];
    // for (int i = k; i < n; i++)
    //     arr[i - k] = arr[i];
    // int count = 0;
    // for (int i = n - k; i < n; i++)
    //     arr[i] = temp[count++];

    // approach 3 : reverse
    reverse(arr, k, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, 0, n - 1);
}

void rightRotateByK(int arr[], int n, int k)
{
    // Your logic here

    // approach 3 : reverse
    reverse(arr, 0, n - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, k - 1);
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

    // Test case 1: Left rotate by 2
    leftRotateByK(arr1, n, 2);
    cout << "After left rotation by 2: ";
    printArray(arr1, n);

    // Test case 2: Right rotate by 3
    rightRotateByK(arr2, n, 3);
    cout << "After right rotation by 3: ";
    printArray(arr2, n);

    return 0;
}
