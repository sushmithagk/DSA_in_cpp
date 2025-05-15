#include<bits\stdc++.h>
using namespace std;

/*
take the day no and print the corresponding day
for day 1 -> print Monday
for day 2 -> print Tuesday
so on
for day 7 -> print Sunday
*/

int main(){
    int day;
    cin>>day;
    switch(day){
        case 1 : 
            cout<<"Monday"<<endl;
            break;

        case 2 :
            cout<<"Tuesday"<<endl;
            break;
        
        case 3 : 
            cout<<"Wednesday"<<endl;
            break;
        
        case 4 :
            cout<<"Thursdaay"<<endl;
            break;

        case 5 :
            cout<<"Friday"<<endl;
            break;

        case 6 :
            cout<<"Saturday"<<endl;
            break;

        case 7 :
            cout<<"Sunday"<<endl;
            break;

        default :
            cout<<"Enter the day no betweeen 1 to 7";
    }
    return 0;
}