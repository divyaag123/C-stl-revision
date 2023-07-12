#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n ;

    cin>>n;
    vector<int> v;
    for(int i =0 ;i<n ; i++){
        int element;
        cin>>element;
        v.push_back(element);
        
    }
    int sum ;
    cin>>sum;
    for(int i =0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(v[i] + v[j] == sum){
                cout<<v[i]<<v[j] ;


            }


        }
    }

}