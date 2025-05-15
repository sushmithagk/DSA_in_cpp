#include<bits/stdc++.h>
using namespace std;
int main(){

    // int , long , long long 
    int a = 120;
    long b = 1525600;
    long long c = 9005708500;
    cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;

    // float , double
    float d = 3.456;
    double e = 4.56788888;
    float g = 4;
    cout<<"d="<<d<<endl<<"e="<<e<<endl<<"g="<<g<<endl;

    // string and getline
    string s;
    cin>>s;
    cout<<s<<endl;

    string s1,s2;
    cin>>s1>>s2;   //if we use two words in the input the s1 will take first word and s2 is second
    cout<<s1<<" "<<s2<<endl;
    
    string s4;
    getline(cin,s4); // using getline it will print the entire line content
    cout<<s4<<endl;

    // char
    char c='a';
    cout<<"a is declared as char = "<<c<<endl;

    string c1="a";
    cout<<"a is decclared as string = "<<c1<<endl;

    return 0;
}