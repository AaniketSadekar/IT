#include<iostream>
using namespace std;
int reverseNo(int n){
    int revNo = 0;
    while(n>0){
        int ld = n % 10;
        revNo = (revNo * 10) + ld;
        n /= 10;
    }
    return revNo;
}
int main(){
    // Reverse No
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        cout<<n<<" Reverse No is: "<<reverseNo(n)<<"\n";
    }
    return 0;
}