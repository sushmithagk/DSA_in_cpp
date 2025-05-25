#include<bits\stdc++.h>
using namespace std;
/*

******
**  **
*    *
*    *
**  **
******

*/
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*i;k++){
            cout<<" ";
        }
        for(int m=0;m<n-i;m++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i);k++){
            cout<<" ";
        }
        for(int m=1;m<=i;m++){
            cout<<"*";
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