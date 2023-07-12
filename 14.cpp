#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator_function(pair<int , int> a , pair<int, int>b)
{
    if(a.first!= b.first){
        if(a.first < b.first)
            return true;
        else
            return false;

    }
    else{
        if(a.second<b.second)
         return true;
    else    
        return false;

    }
        
}
int main(){
    int n ; 
    cin>>n ;
    vector<pair<int , int>> v;
    for(int i =0 ; i<n ; i++){
        int x , y;
        cin>>x >>y;
        v.push_back(make_pair(x, y));



    }
    cout<<"Before Sorting"<<endl;
    for(auto element : v)
        cout<<element.first<<element.second<<endl;
    sort(v.begin() , v.end());
    cout<<"After Sorting"<<endl;
    for(auto element : v)
        cout<<element.first<<element.second<<endl;


}