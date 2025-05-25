#include<bits\stdc++.h>
using namespace std;
/*

A
B B
C C C
D D D D

*/
void print(int n){
    char p='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<p<<" ";
        }
        p+=1;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n value"<<endl;
    cin>>n;
    print(n);
    return 0;
}