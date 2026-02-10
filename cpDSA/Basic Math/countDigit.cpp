#include<iostream>
using namespace std;
int countDigit(int n){
    int cnt = 0;
    while(n>0){
        int ld = n % 10;
        cnt++;
        n /= 10;
    }
    return cnt;
}
int countDigitLog(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}
int main(){
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        cout<<n<<" No of Digit is: "<<countDigit(n)<<"\n";
        cout<<n<<" No of Digit is: "<<countDigitLog(n)<<"\n";
    }
    return 0;
}