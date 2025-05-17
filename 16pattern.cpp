#include<bits\stdc++.h>
using namespace std;
/*
Patterns contains nested for loop
    1. outer for loop -> rows (lines) [count the number of lines]
    2. inner for loop -> columns [connect the columns somehow to the rows]
    3. print inside the inner for loop
    4. observe the symmetry [optional]
*/

/*
****
****
****
****
*/
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
