#include <iostream>
using namespace std;

void insertAtBeginning(int arr[], int &n, int value)
{
    // Your logic here
    for (int i = n; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = value;
    n++;
}

void insertAtEnd(int arr[], int &n, int value)

{
    // Your logic here
    arr[n++] = value;
}

void insertAtPosition(int arr[], int &n, int pos, int value)
{
    // Your logic here
    for (int i = n; i > pos-1; i--)
        arr[i] = arr[i - 1];
    arr[pos-1] = value;
    n++;
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
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Initial array: ";
    printArray(arr, n);

    // Test case 1: Insert at beginning
    insertAtBeginning(arr, n, 5);
    cout << "After inserting 5 at beginning: ";
    printArray(arr, n);

    // Test case 2: Insert at end
    insertAtEnd(arr, n, 60);
    cout << "After inserting 60 at end: ";
    printArray(arr, n);

    // Test case 3: Insert at position
    insertAtPosition(arr, n, 3, 25); // position is 1-based index
    cout << "After inserting 25 at position 3: ";
    printArray(arr, n);

    return 0;
}
