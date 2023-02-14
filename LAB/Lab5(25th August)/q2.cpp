// Merge Sort
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r, int n) // n - size of array , l-left, r-right, m- middle;

{
    int i = l;
    int j = m + 1;
    int k = l;
    int temp[n];
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int p = l; p <= r; p++)
    {
        arr[p] = temp[p];
    }
}
void mergeSort(int arr[], int l, int r, int n)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m, n);
        mergeSort(arr, m + 1, r, n);
        merge(arr, l, m, r, n);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int random = (rand() % 99);
        arr[i] = random;
    }
    cout << "OLD= : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    mergeSort(arr, 0, (n - 1), n);

    cout << "\n\nNEW= :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}