#include<bits\stdc++.h>
using namespace std;

void work(int &num){
    cout<<"Function Number = "<<num<<endl;
    num=num+5;
    cout<<"Modified NUmber = "<<num<<endl;
}
/* using pass by reference the address of the value
is sent to the function if the value is changed in the function 
the same value is printed in the mian function also

add the (int &num) & operator while accepting the variable 
*/
void name(string &s){
    cout<<"Function name = "<<s<<endl;
    s[0]='A';
    cout<<"Modified name = "<<s<<endl;
}

int main(){
    int n=10;
    work(n);
    cout<<"original number = "<<n<<endl;
    string s = "sush";
    name(s);
    cout<<"original name = "<<s;
    return 0;
}