#include<iostream>
using namespace std;
bool checkStringPallindrome(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return checkStringPallindrome(i+1,s);
}
int main(){
    // Check String Pallindrome or not
    int t;
    cout<<"Enter no of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        string s;
        cout<<"Enter a String: ";
        cin>>s;
        cout<<checkStringPallindrome(0,s)<<"\n";
    }
    return 0;
}