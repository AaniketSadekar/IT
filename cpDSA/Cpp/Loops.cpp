#include<iostream>
using namespace std;
int main(){
    // Loops
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    // For Loops
    cout<<"====== For Loops ======"<<"\n";
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"\n";

    // while Loops
    cout<<"====== while Loops ======"<<"\n";
    int i = 1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
    cout<<"\n";

    // do-while Loops
    cout<<"====== do-while Loops ======"<<"\n";
    int x = 11;
    do{
        cout<<x<<" ";
        x++;
    }
    while(x<=n);

    cout<<"\n";

    // Nested Loops
    cout<<"====== Nested Loops ======"<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    cout<<"\n";

    // Break statement
    cout<<"====== Break statement ======"<<"\n";
    for(int i=1;i<=n;i++){
        if(i==6)break;
        cout<<i<<" ";
    }

    cout<<"\n";

    // continue statement
    cout<<"====== continue statement ======"<<"\n";
    for(int i=1;i<=n;i++){
        if(i%2!=0)continue;
        cout<<i<<" ";
    }



    return 0;
}