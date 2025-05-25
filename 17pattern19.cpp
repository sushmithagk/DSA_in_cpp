#include<bits\stdc++.h>
using namespace std;
/*
E        0r     5
D E             4 5
C D E           3 4 5
B C D E         2 3 4 5
A B C D E       1 2 3 4 5
*/
void print1(int n){
    
for(int i=1;i<=n;i++){
    int x=n-i+1;
    for(int j=1;j<=i;j++){
        cout<<x<<" ";
        x++;
    }
    cout<<endl;
}
}
void print2(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        ch=ch+n-i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n value"<<endl;
    cin>>n;
    print1(n);
    print2(n);
    return 0;
}