#include<bits\stdc++.h>
using namespace std;
int main(){
    int i;
    for(i=1;i<=5;i++){
        cout<<"Good day "<<i<<endl;
    }
    cout<<"At the end i= "<<i<<endl;

    for(int j=1;j<=5;j++){
        cout<<"Good "<<j<<endl;

    }
    cout<<"At the end j ="<<endl; // j value can't be printed as i because it's scope is destroyed after the end of the for loop
    return 0;
}