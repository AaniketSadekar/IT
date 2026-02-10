#include<iostream>
using namespace std;
int main(){
    // Data Types

    // Basic Data Type
    int n = 23;
    cout<<"Size of int : "<<sizeof(n)<<" bytes\n";

    float n1 = 3.4;
    cout<<"Size of float : "<<sizeof(n1)<<" bytes\n";

    double n2 = 3.18384903384;
    cout<<"Size of double : "<<sizeof(n2)<<" bytes\n";

    char ch = 'a';
    cout<<"Size of char : "<<sizeof(ch)<<" byte\n";

    bool isTrue = true;
    cout<<"Size of bool: "<<sizeof(isTrue)<<" bytes\n";

    // Data Type Modifier

    /*
        1. char  => signed 1 byte  -128 to 127
           char  => unsigned 1 byte 0 to 255

        2. short int => signed 2 bytes -32768 to 32767
           short int => unsigned 2 byte 0 to 65535

        3. int => signed 4 bytes -2,147,483,648 to 2,147,483,647
           int => unsigned 4 bytes 0 to 4,294,967,295

        4. long int => signed 8 bytes -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
           long int => unsigned 8 bytes 0 to 18,446,744,073,709,551,615

        5. long long int => signed 8 bytes -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
           long long int => unsigned 8 bytes 0 to 18,446,744,073,709,551,615

        6. duble => none 8 bytes ~1.7E-308 to 1.7E+308

        7. long double => none 16 bytes Higher precision, range varies depending on implementation

    
    
    
    
    */




    return 0;
}