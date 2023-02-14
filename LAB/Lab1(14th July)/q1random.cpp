#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = rand();
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";   
    }
    cout<<endl;
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];   
    }
    cout<<"largest number"<<max<<endl;
    cout<<"smallest number"<<min<<endl;

}