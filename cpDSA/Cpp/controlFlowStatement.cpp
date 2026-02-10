#include<iostream>
using namespace std;
int main(){
    // Control Flow Statement
    int age;
    cout<<"Enter a Age: ";
    cin>>age;
    cout<<"\n";

    // if statement
    cout<<"====== if statement ======"<<"\n";
    if(age>18) cout<<"Adult";

    cout<<"\n";

    // if-else statement
    cout<<"====== if-else statement ======"<<"\n";
    if(age>19){
        cout<<"Adult";
    }
    else{
        cout<<"Not Adult";
    }

    cout<<"\n";

    // if-else-if statement
    cout<<"====== if-else-if statement ======"<<"\n";
    if(age<13){
        cout<<"Child";
    }
    else if(age<18){
        cout<<"Teenager";
    }
    else{
        cout<<"Adult";
    }

    cout<<"\n";

    // nested-if statement
    cout<<"====== nested-if statement ======"<<"\n";
    if(age<13){
        if(age<5){
            cout<<"Baby";
        }
        else{
            cout<<"Child";
        }
    }
    else if(age<18){
        cout<<"Teenager";
    }
    else{
        cout<<"Adult";
    }


    cout<<"\n";

    // Ternary  Operator
    cout<<"====== Tenary Operator ======"<<"\n";
    (age>18)? cout<<"Adult" : cout<<"Not Adult";

    cout<<"\n";

    // Switch statement
    cout<<"====== Switch statement ======"<<"\n";
    int day;
    cout<<"Enter a Number: ";
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thurday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"Invalid Input Input should be between 1 to 7";
    }


    return 0;
}