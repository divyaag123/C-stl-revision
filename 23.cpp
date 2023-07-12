#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
void printDeque(deque<int> pq){
    while(!pq.empty()){
        cout<<pq.front()<<" ";
        pq.pop_front();

    }
    cout<<endl;
}
int main(){
    int n ;
    cin>>n;
    deque<int> pq;
    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        if(i%2 ==0)
            pq.push_front(element);
        else
            pq.push_back(element);

    }
    cout<<"Deque size ="<<pq.size()<<endl;
    cout<<"Front Element "<<pq.front()<<endl;
    cout<<"Rear Element =" <<pq.back()<<endl;
    printDeque(pq);1


}