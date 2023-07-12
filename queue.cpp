#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("love");
    q.push("Divya");
    q.push("Agarwal");
    cout<<"First Element"<<q.front()<<endl;
    cout<<"Size before pop"<<q.size()<<endl;
    q.pop();
    cout<<"First Element"<<q.front()<<endl;
    cout<<"size afyter pop"<<q.size()<<endl;

}