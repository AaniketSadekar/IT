#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    // tc => O(n**2)
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
int main(){
    // Selection Sort => Select Minimum & swap
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
        selectionSort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}