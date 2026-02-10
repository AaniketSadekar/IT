#include<iostream>
using namespace std;
void sum(){
    int n1 = 8, n2 = 5;
    cout<<n1+n2<<"\n";
}
void sum(int n1,int n2){
    cout<<n1+n2<<"\n";
}
int add(){
    int n1 = 8;
    int n2 = 5;
    return n1 + n2;
}
int add(int n1,int n2){
    return n1+n2;
}
int main(){
    // Functions

    // void & non-parameterise function
    cout<<"====== void & non-paramerised function"<<"\n";
    sum();

    cout<<"\n";

    // void & parameterise function
    cout<<"====== void & paramerised function"<<"\n";
    sum(8,5);

    cout<<"\n";

    // return & non-parameterise function
    cout<<"====== return & non-paramerised function"<<"\n";
    cout<<add();

    cout<<"\n";

    // return & parameterise function
    cout<<"====== return & paramerised function"<<"\n";
    cout<<add(8,5);

    cout<<"\n";





    return 0;
}