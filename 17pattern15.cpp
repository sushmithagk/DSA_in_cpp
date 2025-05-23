#include<bits\stdc++.h>
using namespace std;
/*

A B C D E
A B C D 
A B C
A B 
A 

*/
void print(int n){
    for(int i=0;i<n;i++){
        char p='A';
        for(int j=0;j<n-i;j++){
            cout<<p<<" ";
            p+=1;
        }
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