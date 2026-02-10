#include<iostream>
#include<map>
using namespace std;
int main(){
    // map Hashing No
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Value: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    
    for(auto i: mpp){
        cout<<i.first<<"->"<<i.second<<"\n";
    }
    
    int q;
    cout<<"Enter No of check Number: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter a Number: ";
        cin>>number;
        // fetch 
        cout<<mpp[number]<<"\n";
    }
    return 0;
}