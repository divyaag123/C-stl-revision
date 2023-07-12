#include<iostream>
#include<deque>
using namespace std;

// what is deque means doubly ended queue.
//insertion and deletion can be done at both ends
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i :d){
        cout<<i<<" ";
    }
    cout<<"print element at firt position "<<d.at(1)<<endl;
    cout<<"front "<<d.front();
    cout<<"back"<<d.back();
    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.end(),d.end()-1);
    cout<<"after erase"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }




}
