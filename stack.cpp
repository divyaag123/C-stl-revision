#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("love");
    s.push("Divya");
    s.push("Agarwal");

    cout<<"Top Element"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element"<<s.top()<<endl;
    cout<<"Stack of size"<<s.size()<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;



     


}