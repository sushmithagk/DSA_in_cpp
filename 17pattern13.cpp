#include<bits\stdc++.h>
using namespace std;
/*

1
2 3 
4 5 6 
7 8 9 10

*/
void print(int n){
    int start=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start+=1;
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