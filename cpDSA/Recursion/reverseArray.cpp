#include<iostream>
using namespace std;
void reverseArray(int i,int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1, arr, n);
}
int main(){
    // reverse Array
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter Array size: ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        reverseArray(0,arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<"\n";
    }
    return 0;
}