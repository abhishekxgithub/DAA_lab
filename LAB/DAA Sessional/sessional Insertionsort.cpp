#include<iostream>
using namespace std;
void insertionSort(int arr[], int nElements)
{
    int p, key, q;
    for (p = 1; p < nElements; p++)
    {
        key = arr[p];
        q = p - 1;
        while (q >= 0 && arr[q] > key)
        {
            arr[q + 1] = arr[q];
            q = q - 1;
        }
        arr[q + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {5, 8, 9, 6, 7, 18, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}