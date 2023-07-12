#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator_function(pair<int, pair<int , int>> a , pair<int, pair<int , int>> b){
    if(a.first != b.first){
        return a.first<b.first;
    }
    else{
        if(a.second.first != b.second.first)
            return a.second.first<b.second.first;
        else
            return a.second.second < b.second.second;
    }
}
int main(){
    int n ;
    cin>>n;
    vector<pair<int , pair<int, int>>> v;
    for(int i=0 ; i<n ; i++){
        int a , b ,c ;
        cin>>a>>b>>c;
        v.push_back({a,{b,c}});
    }
    for (auto it = v.begin(); it!=v.end() ; it++){
         cout<<(*it).first<<" "<<(*it).second.first<<" "<<(*it).second.second<<endl;

    }
    sort(v.begin() , v.end(), comparator_function);
    for(auto it = v.begin(); it!= v.end(); it++){

        cout << (*it).first << " " << (*it).second.first << " " << (*it).second.second;
    }
    return 0;
}
