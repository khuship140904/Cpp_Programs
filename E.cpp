#include <iostream>
using namespace std;

int main(){
    /* Unary Operator
    Increment ++
    post increment 
    pre increment

    Decrement --
    post decrement
    pre increment
    
    */

    int a = 10;

    int b = ++a; //update --> kaam

    int c = a++;//kaam --> update
    cout<<"b = "<<b<<endl;//11
    cout<<"a = "<<a<<endl;//11
    return 0;
}