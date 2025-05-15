#include<bits\stdc++.h>
using namespace std;
int main(){
    string s ="Hello";
    cout<<s[0]<<s[1]<<s[2]<<endl;
    int length;
    length=s.size();
    cout<<"Hello length ="<<length<<endl;
    s[length-4]='i'; // s[4]="i" not allowed because in the string we are accessing the character 
    cout<<s[1];

    return 0;
}