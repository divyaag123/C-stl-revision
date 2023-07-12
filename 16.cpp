#include<iostream>
#include<map>
#include<algorithm>
using namepace std;
int main(){
    map<int , char>m;
    m[1] = 'a';
    m[2] = 'b';
    m[3] = 'c';
    m.insert(make_pair(4,'d'));
    m.insert({5 , 'e'});
    for(pair<int ,char> p : m)
        cout<<p.first<<p.second<<" ";
    cout<<endl;
    for(auto p : m)
        cout<<p.first<<" , " <<p.second<<" ";
    cout<<endl;
    map<int, char> :: iterator i;
    
    return 0;









}
