#include<iostream>
#include<algorithm>
#include<map>
int main(){
    int n ;
    cin>>n;
    map<int , char>m;
    for(int i =0 ; i<n ; i++){
        int key;
        cin>>key;
        char value;
        cin>>value;
        m[key] = value;

    }
    for(pair<int , char> p : m)
        cout<<p.first<<","<<p.second<<" "
        }