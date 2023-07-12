#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(3);
    l.push_front(2);
    l.push_front(4);
    cout<<"before erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"Size of list"<<l.size()<<endl; 
    // to copoy a list
    list<int>n(5,100);
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    

}
