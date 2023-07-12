#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
    //default constructor
    node(){
        data =0;
        next = NULL;

    }

    node(int data){
        this->data = data;
        next = NULL;


    }

};
typedef struct node node;
node *head = NULL;
int main(){
    node*temp = NULL;
    temp = new node(5);
    //node *temp = new node(5);
    if(temp ==NULL)
        exit(1);
    cout<<temp->data<<endl;
    return 0;


}