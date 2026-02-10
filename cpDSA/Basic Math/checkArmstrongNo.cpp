#include<iostream>
using namespace std;
int checkArmstrongNo(int n){
    int sum = 0;
    int dup = n;
    while(n>0){
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n /= 10;
    }
    return dup == sum;
}
int main(){
    // check Armstrong no
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        if(checkArmstrongNo(n)){
            cout<<n<<" is Armstrong No\n";
        }
        else{
            cout<<n<<" Not Armstrong No\n";
        }

    }
    return 0;
}