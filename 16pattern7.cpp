#include<bits\stdc++.h>
using namespace std;
/* 
    *
   ***
  *****
 *******
*********
*/
void print(int n){
    for(int i=0;i<n;i++){
        //for space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //for star
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        // //for space
        // for(int m=0;m<n-i-1;m++){
        //     cout<<" ";
        // }
        cout<<endl;

    }
}

int main(){
    int n;
    cin>>n;
    print(n);
    return  0;
}