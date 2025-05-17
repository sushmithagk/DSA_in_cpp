#include<bits\stdc++.h>
using namespace std;
/*
void and parameterised
*/

void personaldetails(string name1,int age1){
    cout<<"Name = "<<name1<<endl;
    cout<<"Age = "<<age1<<endl;
}
int main(){
    string name;
    int age;
    cin>>name;
    cin>>age;
    personaldetails(name,age);
    return 0;
}