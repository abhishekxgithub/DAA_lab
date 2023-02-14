// Selection sort 
#include<bits/stdc++.h>
using namespace std;

void sort1(int arr[],int n){
  for(int i=0;i<n-1;i++) {
    int m=i;
    for(int j=i+1; j < n; j++) {

      if (arr[j]< arr[m])
        m = j;
    }


        int temp=arr[m];
        arr[m]=arr[i];
        arr[i]=temp;
  }

}
int main(){

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


    sort1(arr,n);
}