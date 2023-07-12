#include<iostream>
#include<queue>
#include<deque>
int main(){
    int n ; 
    cin>>n;
    for(int i =0 ; i<n ; i++){
        
 int element; 
           cin>>element;
         dq.push_front(element); // last m elements daaal rhe 
        
    }
    while(!dq.empty()){
        cout<<dq.back()<<" "; //last se elements print kra rhe h
        dq.pop_back(); 
    }
    }
