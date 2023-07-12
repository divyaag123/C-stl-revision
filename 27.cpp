#include<iostream>
#include<queue>
using namespace std;
//PRIORITY QUEUE IN ASCENDING ORDER (MIN HEAP)

 printPriorityQueue(priority_queue<int,vector<int> , greater<int>> q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
 }

 printPriorityQueue(priority_queue<int> pq){
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl; 
 }
int main(){
    int n;
    cin>>n;
    priority_queue<int> pq;
    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        pq.push(element);
        printPriorityQueue(pq);
    }
    cout<<"Size of Priority Queue ="<<pq.size()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    priority_queue<int,vector<int> , greater<int>> q;
    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        pq.push(element);
        printPriorityQueue(pq);
    }

    return 0;

}