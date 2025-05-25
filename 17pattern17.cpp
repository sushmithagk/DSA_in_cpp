#include<bits\stdc++.h>
using namespace std;
/*
   1
  121
 12321
1234321

*/
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int m=i-1;m>=1;m--){
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
    return 0;
}