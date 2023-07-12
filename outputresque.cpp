#include<iostream>
#include<queue>
#include<deque>
int main(){
    int n; 
    cin>>n;
    deque<int>dq;
    for(int i =0 ; i<n ; i++){
        int element;
        cin>>element;
        if(i%2 == 0)
            dq.push_back(element);
        else    
            dq.push_back(element);
        
    }

}