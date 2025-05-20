#include<bits\stdc++.h>
using namespace std;
/*
*********
 *******
  *****
   ***
    *
*/
void print(int n){
    for(int i=0;i<n;i++){
        //for space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //for star
        for(int k=0;k<(n*2-1)-2*i;k++){
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