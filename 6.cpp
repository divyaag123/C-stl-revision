#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int> q;
    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        q.push(element);

    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();


    }
    return 0;

}