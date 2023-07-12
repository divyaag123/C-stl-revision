#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
pair<int , int>target_pair;
    cin>>target_pair.first>>target_pair.second;
    int n;
    cin>>n;
    int count =0;
    for(int i= 0 ; i<n ; i++){
        int a, b;
        cin>>a >>b;
        pair<int , int> p = make_pair(a , b);
        if(target_pair == p)
            count++;


    }
    cout<<count;
    return 0;
}