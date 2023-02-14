using namespace std;

int ss(vector<int>&arr, int n) {
    int small = arr[0];
    int ssmall = arr[1];
    for(int i = 0;i<small;i++) {
        if(arr[i] < small) {
            ssmall = small;
            small = arr[i];
        }
    }
    
    for(int i = 0; i<n;i++) {
        if(arr[i] < ssmall && arr[i] != small) {
            ssmall = arr[i];
        }
    }
    
    return ssmall;
}

// second largest

int sl(vector<int>&arr, int n) {
    int large = arr[0];
    int slarge = arr[1];
    for(int i = 0;i<n;i++) {
        if(arr[i] > large) {
            slarge = large;
            large = arr[i];
        }
    }
    
    for(int i = 0; i<n;i++) {
        if(arr[i] > slarge && arr[i] != large) {
            slarge = arr[i];
        }
    }
    
    return slarge;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i = 0; i<n;i++) {
        cin>>arr[i];
    }
    int secondm = ss(arr,n);
    int secondl = sl(arr,n);
    cout<<"second smallest is :"<<secondm<<" and second large : "<<secondl;
 return 0;
}