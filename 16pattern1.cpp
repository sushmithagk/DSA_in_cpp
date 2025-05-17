#include<bits\stdc++.h>
using namespace std;
/*
    * * * *
    * * * *
    * * * *
    * * * *
*/
void print_pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    // int testcase,n;
    // cin>>testcase;
    // for(int i=0;i<testcase;i++){
    //     cin>>n;
    //     print_pattern(n);
    // }

    int n;
    cin>>n;
    print_pattern(n);
  
    return 0;
}