// BUBBLE SORT

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void sort1(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    sort1(arr, n);
    cout << "\nNEW= :";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}