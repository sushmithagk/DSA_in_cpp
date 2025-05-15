#include<bits\stdc++.h>
using namespace std;
/*
 write a program to print the grade
 below 25  - F
 25 to 44 - E
 45 to 49 - D
 50 to 59 - C
 60 to 79 - B
 80 to 100 - A

*/


int main(){
    int marks;
    cin>>marks;
    if(marks<0 or marks>100){
        cout<<"Enter the marks between 0 to 100"<<endl;
    }
    else if(marks<25){
        cout<<"F Grade"<<endl;
    }
    else if(marks<=44){
        cout<<"E Grade"<<endl;
    }
    else if(marks<=49){
        cout<<"D Grade"<<endl;
    }
    else if(marks<=59){
        cout<<"C Grade"<<endl;
    }
    else if(marks<=79){
        cout<<"B Grade"<<endl;
    }
    else if(marks<=100){
        cout<<"A Grade"<<endl;
    }
    
    return 0;
    
}