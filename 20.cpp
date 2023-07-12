#include<iostream>
#include<map>
using namespace std;
void print(map<int , int> &m){
    cout<<m.size()<<endl;
    for(auto pr : m){
        cout<<pr.first<<pr.second<<endl;
    }
    
}
int main(){
    //keys are stored in sorted order and they have unique value in map

    map<int , int>m;
    m[1] = 3;
    m[2] = 4;
    m[3] = 5;
    //m[1] = "abc"; //O(log(n)) insertion time complexity
    //m[5] = "cdc";
    //m[3] = "acd";
    //m[5] = "cde";
    //m.insert({4 , "afg"});
    m[6] =7;
    auto it = m.find(3);//time complexity of find operation is 
    //O(log(n))
     // if 3 not present it = m.end
    //map<int , string> :: iterator it;
    //for(it = m.begin() ; it!= m.end() ; ++it)
        //cout<<(*it).first<<(*it).second<<endl;
    if(it == m.end()){
        cout<<"No Value"<<endl;

    }else{
        cout<<(*it).first<<" "<<(*it).second;
    }
    //print(m); 
    
    
    
    return 0;

     
}
