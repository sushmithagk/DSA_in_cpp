#include<bits\stdc++.h>
using namespace std;
/*

****
*  *
*  *
****

*/
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n){
                cout<<"*";
            }
            else{
                if(i==1 || i==n){
                     cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
                
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