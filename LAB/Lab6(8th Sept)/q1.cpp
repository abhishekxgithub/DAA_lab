// Implementation Heap Sort .

#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int N, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < N && arr[l] < arr[largest])
        largest = l;

    if (r < N && arr[r] < arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, N, largest);
    }
}

void buildHeap(int arr[], int N)
{
    int startIdx = (N / 2) - 1;

    for (int i = startIdx; i >= 0; i--)
    {
        heapify(arr, N, i);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int random = (rand() % 9);
        arr[i] = random;
    }
    cout << "OLD= : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    buildHeap(arr, n);

    cout << "\n\nNEW= :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}