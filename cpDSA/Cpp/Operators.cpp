#include<iostream>
using namespace std;
int main(){
    // Operators 
    // Arithmetic Operators
    int n1,n2;
    cout<<"Enter 1st Number: ";
    cin>>n1;
    cout<<"Enter 2nd Number: ";
    cin>>n2;

    cout<<"\n";

    cout<<"====== Arithmetic Operators ======"<<"\n";
    cout<<"Addition of: "<<n1<<" + "<<n2<<" = "<<n1+n2<<"\n";
    cout<<"Subtraction of: "<<n1<<" - "<<n2<<" = "<<n1-n2<<"\n";
    cout<<"Multiplication of: "<<n1<<" * "<<n2<<" = "<<n1*n2<<"\n";
    cout<<"Division of: "<<n1<<" / "<<n2<<" = "<<n1/n2<<"\n";
    cout<<"Modulo of: "<<n1<<" % "<<n2<<" = "<<n1%n2<<"\n";
    cout<<"\n";

    // Relational Operators
    cout<<"====== Relational Operators ======"<<"\n";

    // Equal operator
    cout << "n1 == n1 is " << (n1 == n2) << endl;
  
    // Greater than operator
    cout << "n1 > n2 is " << (n1 > n2) << endl;
  
    // Greater than Equal to operator
    cout << "n1 >= n2 is " << (n1 >= n2) << endl;
  
    //  Lesser than operator
    cout << "n1 < n2 is " << (n1 < n2) << endl;
  
    // Lesser than Equal to operator
    cout << "n1 <= n2 is " << (n1 <= n2) << endl;
  
    // Not equal to operator
    cout << "n1 != n2 is " << (n1 != n2);

    cout<<"\n";

    // Logical Operators
    cout<<"====== Logical Operators ======"<<"\n";

    // Logical AND operator
    cout<<(n1>n2 && n2 < n1)<<endl;
    // Logical OR operator
    cout<<(n1>n2 && n2>n1)<<endl;
  
    // Logical NOT operator
    cout<<(!(n2>n1))<<endl;

    cout<<"\n";

    // Bitwise Operators
    cout<<"====== Bitwise Operator ======"<<"\n";

    cout<<(n1 & n2)<<"\n"; // Binary AND, &, Copies a bit to the result if it exists in both operands
    cout<<(n1 | n2)<<"\n"; // Binary OR, |, Copies a bit to the result if it exists in any of the operands
    cout<<(n1 ^ n2)<<"\n"; // Binary XOR, ^, Copies the bit to the result if it is present in either of the operands but not both
    cout<<(n1 << 1)<<"\n"; // Left Shift, <<, Shifts the value to the left by the number of bits specified by the right operand
    cout<<(n2 >> 1)<<"\n"; // Right Shift, >>, Shifts the value to the right by the number of bits specified by the right operand
    cout<<(~ (n1))<<"\n";  // One's Complement, ~, Changes binary digits 1 to 0 and 0 to 1

    cout<<"\n";

    // Assignment Operators
    cout<<"====== Assignment Operators ======"<<"\n";

    cout<<(n1+=2)<<"\n";
    cout<<(n1-=2)<<"\n";
    cout<<(n1*=2)<<"\n";
    cout<<(n1/=2)<<"\n";
    cout<<(n1+=2)<<"\n";
    cout<<(n1=2)<<"\n";

    cout<<"\n";

    // Tenary Operators 
    cout<<"====== Tenary Operators ======"<<"\n";

    int largest = (n1 > n2 ) ? n2 : n1;
    cout<<"The greatest Number is: "<<largest;
    

    return 0;
}