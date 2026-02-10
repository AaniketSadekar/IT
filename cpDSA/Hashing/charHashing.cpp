#include<iostream>
using namespace std;
int main(){
    // char Hashing 
    string s;
    cout<<"Enter a String: ";
    cin>>s;


    // precompute
    int hash[256] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cout<<"Enter No of check Number: ";
    cin>>q;
    while(q--){
        char ch;
        cout<<"Enter a character: ";
        cin>>ch;
        // fetch 
        cout<<hash[ch]<<"\n";
    }
    return 0;
}