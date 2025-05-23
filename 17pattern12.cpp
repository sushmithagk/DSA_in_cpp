#include<bits\stdc++.h>
using namespace std;
/*
1      1
12    21
123  321
12344321
*/
void print(int n){
    for(int i=1;i<=n;i++){
        int j,k,m;
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(k=1;k<=2*n-2*i;k++){
            cout<<" ";
        }
        for(m=i;m>=1;m--){
            cout<<m;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n value"<<endl;
    cin>>n;
    print(n);
}