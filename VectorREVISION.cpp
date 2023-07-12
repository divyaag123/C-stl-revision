// REVISION OF VECTORS
#include<iostream>
#include<vector>
using namespace std;
int get_max(vector<int>v){
    int max = v[0];
    for(int i=0 ; i<v.size() ; i++){
        if(v[i] > max){
            max = v[i];
        }


    }
    return max;

}
int get_min(vector<int>v){
    int min = v[0];
    for(int i=0 ; i<v.size() ; i++){
        if(v[i] <min){
            min= v[i];
        }


    }
    return min;

}

int main(){
    // creating a vector
    vector<int> v ;
    //putting elements in a vector
    v.push_back(3);
    cout<<"Size "<<v.size()<<" "<<"Capacity "<< v.capacity()<<endl;
    v.push_back(6);
     cout<<"Size"<<v.size()<<" "<<"Capacity"<< v.capacity()<<endl;
    v.push_back(9);
     cout<<"Size"<<v.size()<<" "<<"Capacity"<< v.capacity()<<endl;
    v.push_back(12);
     cout<<"Size"<<v.size()<<" "<<"Capacity"<< v.capacity()<<endl;
    // displaying elements of a vector
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // using iterator function
    // step 1 -> declare iterator function
    cout<<"Using iterartor"<<endl;
    vector<int> :: iterator it;
    for(it = v.begin() ; it!= v.end() ; it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    cout<<"Using for each loop"<<endl;
    for(auto ele : v){
        cout<<ele<<" ";
    }
    cout<<"Printing max element in a vector"<<endl;
    int max = get_max(v);
    cout<<max<<endl;
    int min = get_min(v);
    cout<<"Min Element in a vector "<<min<<endl;




}