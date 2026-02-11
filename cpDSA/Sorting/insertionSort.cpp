#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    // tc => worst & average O(n**2)  best => O(n)
    for(int i=0;i<=n-1;i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}
int main(){
    // insertion sort => Take an element & place it its correct order
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
        insertionSort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}