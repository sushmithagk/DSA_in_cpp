#include<bits\stdc++.h>
using namespace std;

//write a program to check adult or not
// age>=18 ,yes
// age<18 ,no 

int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are adult"<<endl;
    }
    else if(age<=0){
        cout<<"Enter the positive number because age is an positive integer"<<endl;
    }
    else{
        cout<<"You are not an adult"<<endl;
    }
    return 0;
}