#include<bits\stdc++.h>
using namespace std;
/*
    *
    * *
    * * *
    * * * *
*/
void print_pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print_pattern(n);
    return 0;
}