// QUICK SORT

#include <bits/stdc++.h>
using namespace std;

int part(int arr[], int s, int e)
{

    int pivot = s;
    int i = s + 1;
    int j = e;

    while (i < j)
    {
        while (arr[i] < arr[pivot])
        {
            i++;
        }
        while (arr[j] > arr[pivot])
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[pivot], arr[j]);
    return j;
}

void quick(int arr[], int s, int e)
{

    if (s < e)
    {

        int p = part(arr, s, e);
        quick(arr, s, p - 1);
        quick(arr, p + 1, e);
    }
}

int main()
{
    int n;
    cin >> n;
    k int arr[n];
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
    quick(arr, 0, n - 1);

    cout << "\n\nNEW= :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}