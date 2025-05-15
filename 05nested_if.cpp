#include<bits\stdc++.h>
using namespace std;
/*
take age from user and decide 
1. age < 18,
    print -> not eligible for job
2. age >= 18,
    print -> eligible for job
3. if age >=55 and age <=57,
    print -> eligible for job, but retirement soon
4. if age > 57
    print -> retirement time
*/

int main(){
    int age;
    cin>>age;
    if(age<0){
        cout<<"Enter the age in positive number"<<endl;
    }
    else if(age<18){
        cout<<"not eligible for job"<<endl;
    }
    // else if(age<=55){
    //     cout<<"eligible for job"<<endl;
    // }
    // else if(age<=57){
    //     cout<<"eligible for job, but retirement soon"<<endl;
    // }
    else if(age<=57){
        cout<<"eligible for job";
        if(age>=55){
            cout<<",but retirrement soon"<<endl;
        }
    }
    else {
        cout<<"retirement time"<<endl;
    }
    return 0;
}