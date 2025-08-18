#include <iostream>
using namespace std;

void deleteAtBeginning(int arr[], int &n)
{
    // Your logic here
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void deleteAtEnd(int arr[], int &n)
{
    // Your logic here
    n--;
}

void deleteAtPosition(int arr[], int &n, int pos)
{
    // Your logic here
    for (int i = pos-1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
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
    int arr[100] = {5, 10, 25, 20, 30, 40, 50, 60};
    int n = 8;

    cout << "Initial array: ";
    printArray(arr, n);

    // Test case 1: Delete at beginning
    deleteAtBeginning(arr, n);
    cout << "After deleting at beginning: ";
    printArray(arr, n);

    // Test case 2: Delete at end
    deleteAtEnd(arr, n);
    cout << "After deleting at end: ";
    printArray(arr, n);

    // Test case 3: Delete at position
    deleteAtPosition(arr, n, 3); // position is 1-based index
    cout << "After deleting at position 3: ";
    printArray(arr, n);

    return 0;
}
