// Matrix Chain multiplication
#include <bits/stdc++.h>
using namespace std;
int matOrder(int array[], int n){
   int minMul[n][n];
   for (int i=1; i<n; i++)
      minMul[i][i] = 0;
      for (int length=2; length<n; length++){
         for (int i=1; i<n-length+1; i++){
            int j = i+length-1;
            minMul[i][j] = INT_MAX;
            for (int k=i; k<=j-1; k++){

               int q = minMul[i][k] + minMul[k+1][j] + array[i-1]*array[k]*array[j];
               if (q < minMul[i][j])
                  minMul[i][j] = q;
            }
      }
   }
   cout<<endl;
   for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
              if (i > j)
            {
                cout << "-  " << " ";
            }
            else
        cout<<minMul[i][j]<<" ";

    }
     cout<<endl;
   }
   return minMul[1][n-1];
}

int main()
{
    int N;
    cout<<"Enter the number of P=";
    cin>>N;
    int arr[N];
    cout<<"Enter=";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout << "Minimum number of multiplications is "
         << matOrder(arr, N);
    return 0;
}