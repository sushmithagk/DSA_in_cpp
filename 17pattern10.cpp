#include<bits\stdc++.h>
using namespace std;
/*

*
**
***
****
***
**
*

*/
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){ //  for(int j=n-1;j>i;j++)
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}