#include<iostream>
using namespace std;
void printAllDivisior(int n){
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);

            if(i != (n/i)){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto i : v){
        cout<<i<<" ";
    }
}
int main(){
    // print All Divisior
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        printAllDivisior(n);
        cout<<"\n";
    }
    return 0;
}