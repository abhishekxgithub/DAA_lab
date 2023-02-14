//insertion 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


void insertionSort(int a[], int n){  
    int i, j, key;  
    for (i = 1; i < n; i++){
        key = a[i];  
        j = i - 1;  
  
        while(j>=0 && key <= a[j]){    
            a[j+1] = a[j];     
            j = j-1;    
        }
        a[j+1] = key;    
    }  
}
void reverseArray(int a[], int n){
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

int main(){

    int arr[50000],n;
    clock_t start=clock();
    printf("\nEnter length of Array:");
    scanf("%d",&n);
    printf("\nEnter Elements:");
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
    }

    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    insertionSort(arr,n);

    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\ninsertion took %Lf seconds to execute \n\n", ((long double)(clock()-start))/CLOCKS_PER_SEC);

    insertionSort(arr,n);
    
    printf("Best Case took %Lf seconds to execute \n\n", ((long double)(clock()-start))/CLOCKS_PER_SEC);

    reverseArray(arr,n);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    insertionSort(arr,n);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\nWorst Case took %Lf seconds to execute \n\n", ((long double)(clock()-start))/CLOCKS_PER_SEC);


    return 0;

}