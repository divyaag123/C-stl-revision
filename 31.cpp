#include<iostream>
#include<stdlib.h>
using namespace std;

    struct node{
        int data;
        struct node * next;

    };
    typedef struct node node;
    node *head = NULL;
    
int mainI(){
    node *temp = NULL;
    temp = (node *)malloc(sizeof(node));
    if(temp == NULL)
        exit(1); // unsucessful exit
    temp->data = 5;
    temp->next = NULL;
    cout<<temp<<endl;
    return 0;
}