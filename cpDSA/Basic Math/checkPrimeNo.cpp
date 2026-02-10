#include<iostream>
using namespace std;
void checkPrimeNo(int n){
    int cnt = 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            break;
        }
    }
    if(cnt==0){
        cout<<n<<" is Prime No\n";
    }
    else{
        cout<<n<<" Not Prime No\n";
    }
}
int main(){
    // check Prime No
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        checkPrimeNo(n);

    }
    return 0;
}