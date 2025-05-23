#include<bits\stdc++.h>
using namespace std;
/*

A
A B 
A B C
A B C D
A B C D E

*/
void print(int n){
      
    for(int i=0;i<n;i++){
        char pr='A';
        for(int j=0;j<=i;j++){
            cout<<pr<<" ";
            pr+=1;
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cout<<"Enter n value "<<endl;
    cin>>n;
    print(n);
    return 0;
}
