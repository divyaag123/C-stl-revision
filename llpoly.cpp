#include<iostream>
using namespce std;
struct node{
        int data;
        struct node * next;
    };
struct node create_node(int data ){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp ->data = data;
    temp->next = NULL;
    return temp;


}
void print(head){
    
}
int main(){
    // implementation of a polynomial using linked list
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head = create_node(2);
    


}