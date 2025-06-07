//pairs
#include<bits\stdc++.h>
using namespace std;
void pairs(){
    pair<int,int> n={1,3};  // n is a name for the pair it can be anything
    cout<<"Normal pair"<<endl;
    cout<<n.first<<" "<<n.second<<endl;
   
    pair<int,pair<int,int>> p={30,{05,2005}};
    cout<<"Nested pair"<<endl; 
    cout<<p.first<<"-"<<p.second.first<<"-"<<p.second.second<<endl;

    pair<int,int> a[]={{2,7}, {30,24},{5,1}};
    cout<<"Arrary pair"<<endl;
    cout<<a[0].first<<endl;

    pair<pair<int,int>,pair<int,int>> m={{30,22},{05,2005}};
    cout<<"Nested pair"<<endl; 
    cout<<m.first.first<<"-"<<m.second.first<<"-"<<m.second.second<<endl;
    cout<<m.first.second<<"-"<<m.second.first<<"-"<<m.second.second<<endl;
}
int main(){
    pairs();
    return 0;
}

