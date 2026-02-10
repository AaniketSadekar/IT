#include<iostream>
using namespace std;
void print1ToNbt(int i, int n){
    if(i<1) return;
    print1ToNbt(i-1,n);
    cout<<i<<" ";
}
int main(){
    // print Name To N
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        print1ToNbt(n,n);
        cout<<"\n";
    }
    return 0;
}