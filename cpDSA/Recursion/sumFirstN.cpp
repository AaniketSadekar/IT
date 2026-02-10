#include<iostream>
using namespace std;
void sumFirstNo(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumFirstNo(i-1,sum+i);
}
int sumFirstN(int n){
    if(n==0) return 0;
    return n + sumFirstN(n-1);
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
        sumFirstNo(n,0);
        cout<<"\n";
        cout<<sumFirstN(n)<<"\n";
    }
    return 0;
}