#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        int didSwap = 0;
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }
}
int main(){
    // Bubble Sort => Push the max to the left by adjecent swaps
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter Size Arayy: ";
        cin>>n;
        int arr[n];
        cout<<"Enter Array Value: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bubbleSort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    }
    return 0;
}