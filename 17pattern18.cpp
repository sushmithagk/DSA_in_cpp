#include<bits\stdc++.h>
using namespace std;
/*
   A
  ABA
 ABCBA
ABCDCBA

*/
void print(int n){
    for(int i=1;i<=n;i++){
        char p='A';
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<p;
            p+=1;
        }
        p-=2;
        for(int m=i-1;m>=1;m--){           
            cout<<p;
            p-=1;
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