#include<iostream>
#include<queue>
using namespace std;
struct node{
    int a;
    float f;
    char c;
    string str;
    node(int a_ , float f_  , char c_ , string str_ ){
        a = a_;
        f = f_;
        c = c_;
        str = str_;
    }

};
int main(){
    node* rishabh = new node(101,3.142,'R' ,"Bafna");
    
    cout<<"Integer a = "<<(*rishabh).a<<endl;
    cout<<"Floating point number f"<<rishabh->f<<endl;
    cout<<"Character c = "<<rishabh->str<<endl;
    cout<<"String str ="<<rishabh->str<<endl;
    return 0;

}