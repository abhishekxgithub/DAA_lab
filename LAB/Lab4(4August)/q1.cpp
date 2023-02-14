// Implement recursive binary search compare time taken with linear search for different array sizes.

#include <bits/stdc++.h>
using namespace std;
#include <chrono>
using namespace chrono;
int binary(int arr[], int s, int e, int k)
{
    if (e >= s)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k)
            return mid;

        if (arr[mid] > k)
            return binary(arr, s, mid - 1, k);

        return binary(arr, mid + 1, e, k);
    }

    return -1;
}

void sort1(int arr[], int n)
{
    int k;
    int j;
    for (int i = 1; i < n; i++)
    {
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

int linear(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int n;
    cin >> n;

    auto m = high_resolution_clock::now();
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int random = (rand() % 100);
        arr[i] = random;
    }
    cout << "OLD= : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int k;
    cout << "\nEnter target= ";
    cin >> k;

    cout << "BY LINEAR SEARCH= " << linear(arr, n, k) << endl;

    auto z = high_resolution_clock::now();

    auto t = duration_cast<microseconds>(z - m);

    cout << "\n time=" << t.count();
    sort1(arr, n);
    cout << "\nNEW= : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nBY BINARY SEARCH= " << binary(arr, 0, n, k) << endl;

    auto z2 = high_resolution_clock::now();

    auto t2 = duration_cast<microseconds>(z2 - z);

    cout << "\n time=" << t.count();
    return 0;
}