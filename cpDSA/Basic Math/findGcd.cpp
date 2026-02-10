#include<iostream>
using namespace std;
void findgcd(int n1, int n2){
    for(int i=min(n1,n2); i>=0;i++){
        if(n1%i==0 && n2%i==0){
            cout<<i;
            break;
        }
    }
}
int findGcd(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    if(n1==0) return n2;
    return n1;
}
int main(){
    // find Gcd
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n1,n2;
        cout<<"Enter 2 Number: ";
        cin>>n1>>n2;
        findgcd(n1,n2);
        cout<<"\n";
        cout<<n1<<","<<n2<<" Gcd is: "<<findGcd(n1,n2)<<"\n";
    }
    return 0;
}