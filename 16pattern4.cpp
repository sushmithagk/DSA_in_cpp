#include<bits\stdc++.h>
using namespace std;

/*
1
2 2 
3 3 3
4 4 4 4 
5 5 5 5 5
*/
void print_pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print_pattern(n);
}