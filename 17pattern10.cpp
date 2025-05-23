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
void print1(int n){
    for(int i=1;i<2*n;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

int main(){
    int n;
    cin>>n;
    print(n);

    cout<<"Another method"<<endl;
    print1(n);
    return 0;
}