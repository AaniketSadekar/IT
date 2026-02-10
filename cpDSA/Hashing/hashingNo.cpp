#include<iostream>
using namespace std;
int main(){
    // Hashing No
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Value: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"Enter No of check Number: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter a Number: ";
        cin>>number;
        // fetch 
        cout<<hash[number]<<"\n";
    }
    return 0;
}