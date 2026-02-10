#include<iostream>
using namespace std;
int checkPallindromeNo(int n){
    int revNo = 0;
    int dup = n;
    while(n>0){
        int ld = n % 10;
        revNo = (revNo * 10) + ld;
        n /= 10;
    }
    return dup == revNo;
}
int main(){
    // Check Pallindrome No
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        if(checkPallindromeNo(n)){
            cout<<n<<" is Pallindrome No\n";
        }
        else{
            cout<<n<<" Not Pallindrome No\n";
        }

    }
    return 0;
}