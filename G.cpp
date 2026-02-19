#include <iostream>
using namespace std;

int main(){
  //conditional statements-if else

  int age;

   cout<<"enter the age: ";
    cin>>age;

    if(age>=18){
      cout<<"can vote"<<endl;
    }else if(age>=60){
      cout<<"senior citizen";
    }else{
      cout<<"under age";
    }
  return 0;
}