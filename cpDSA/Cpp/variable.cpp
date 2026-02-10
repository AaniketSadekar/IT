#include<iostream>
using namespace std;
int main(){
    // variable 
    /*
        Variable Naming Rule:
            1. A name can only contain letters (A-Z or a-z),digits(0-9) and underscores(_)
            2. It should start with a letter or an underscore only.
            3. It is case sensitive.
            4. The name of variable should not contain any whitespace and special character.
            5. We cannot use reserve keyword
    
    */

    // Valid Variable naming 

    string personName = "John";
    string personname = "John";
    string PersonName = "John";
    string Personname = "John";
    string Person_name = "John";
    int personAge = 23;

    // Invalid Variable Naming
    /*
        string person name = "John"
        1 roll no = 1
    */


    return 0;
}