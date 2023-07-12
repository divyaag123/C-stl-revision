/*Given N strings , print unique strings in
lexiographical order with their frequency
N <= 10^5
|S| <= 100*/

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string , int> m ;
    int n;
    cin>>n;
    for(int i =0 ; i<n ; i++){
        string s;
        cin>>s;
        m[s]++;




    }
    for(auto pr: m)
        cout<<pr.first<<" "<<pr.second<<endl;


}