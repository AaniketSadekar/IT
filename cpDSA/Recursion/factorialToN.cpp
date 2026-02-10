#include<iostream>
using namespace std;
int factorialToN(int n){
    if(n == 0) return 0;
    return n * factorialToN(n-1);
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
        cout<<factorialToN(n)<<"\n";
    }
    return 0;
}