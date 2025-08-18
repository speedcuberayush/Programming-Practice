#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    // Your logic here
    // Hint: Use three pointers -> low, mid, high
    int zero = 0, one = 0, two = n - 1;
    while (one <= two)
    {
        switch (arr[one])
        {
        case 0:
            swap(arr[zero++], arr[one++]);
            break;
        case 1:
            one++;
            break;
        case 2:
            swap(arr[two--], arr[one]);
            break;

        default:
            break;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    sort012(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
