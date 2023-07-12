#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    int n ;
    cin>>n;
    queue<int> q;
    for(int i =0 ; i<n ; i++){
        int element;
        cin>>element;
        q.push(element);
    }
    cout<<"Queue size ="<<q.size()<<endl;
    cout<<"Front ="<<q.front()<<endl;
    cout<<"Base element ="<<q.back()<<endl;

}
