#include<iostream>
using namespace std;
void printNTo1bt(int i, int n){
    if(i>n) return;
    printNTo1bt(i+1,n);
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
        printNTo1bt(1,n);
        cout<<"\n";
    }
    return 0;
}