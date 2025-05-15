#include<bits\stdc++.h>
using namespace std;
/*
return and parameterised
*/
int sumof2(int m,int n){
    int sum;
    sum = m+n;
    return sum;
}

int main(){
    int a,b,add;
    cin>>a>>b;
    add=sumof2(a,b);
    cout<<"sum of "<<a<<" and "<<b<<" is "<<add<<endl;
    return 0;
}