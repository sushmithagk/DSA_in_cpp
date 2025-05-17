#include<bits\stdc++.h>
using namespace std;

void work(int num){
    cout<<"Function Number = "<<num<<endl;
    num=num+5;
    cout<<"Modified NUmber = "<<num<<endl;

}

/*using pass by value the copy of the
 value is sent to the function if value
 is modifoed in the function it won't affect
 the original value */

 void name(string s){
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
    return 0;
}