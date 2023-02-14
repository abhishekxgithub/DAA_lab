// Implement Insertion and deletion in heap sort

#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && arr[l] < arr[largest])
		largest = l;

	if (r < n && arr[r] < arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, n, largest);
	}
}

void insertNode(int arr[], int& n)
{
    int k;
    cout<<"\n enter the new element= ";
    cin>>k;

    n = n + 1;
    arr[n - 1] = k;
    heapify(arr, n, n - 1);
}

void deleteRoot(int arr[], int& n)
{


    arr[0]  = arr[n - 1];
    n = n - 1;
    heapify(arr, n, 0);
}

void buildHeap(int arr[], int n)
{
	int startIdx = (n / 2) - 1;

	for (int i = startIdx; i >= 0; i--) {
		heapify(arr, n, i);
	}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
   int random = (rand() % 9);
            arr[i] = random;
    }
    cout<<"OLD= : ";
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertNode(arr,n);
    buildHeap(arr, n);


     cout<<"\n\nNEW= :";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    deleteRoot(arr,n);

    cout<<"\n\nAFTER DELETION= :";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}

