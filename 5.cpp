#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int n ;
    cin>>n;
    stack<int>s;
    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        s.push(element);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    return 0;

}