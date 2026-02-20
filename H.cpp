#include <iostream>
using namespace std;

int main(){
    //question - find character lowercase and uppercase
    char character;

    cout<<"enter the character : "<<endl;
    cin>>character;

    if (character>='a' && character<='z')
    {
        cout<<"lowercase"<<endl;
    }else{
        cout<<"uppercase"<<endl;
    }
    
    return 0;
}