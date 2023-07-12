#include<iostream>
#include<stdlib.h>
using namespace std;

// DECLARARTION OF NODE
struct node{
    int data;
    struct node*next;

};
struct node *head = NULL; // DECLARARTION OF A HEAD POINTER
void displaySLL(){
    node *p = head;
    while(p){
        cout<<p->data <<" ";
        p = p->next;
    }
}


typedef struct node node;
void createNodeSLL(int element){
    node *temp = NULL;
    temp = (node*) malloc(sizeof(node));
    if(temp == NULL)
        exit(1);//unsucessful exit

    temp ->data = element;
    temp->next = NULL;

    if(head == NULL)
        head = temp;
    else{
        node *p = head;
        while(p->next){
            p = p->next;
        }
        p->next = temp;
    


    }

    temp = NULL;
   
}
int length(){
    int count = 0;
    node *p = head;
    while(p){
        count ++ ;
        p = p ->next;
    }
    return count ;
}
void insertAtBegin(){
    node * temp = NULL;
    temp = (node*)malloc(sizeof(node));
    if(temp == NULL){
        exit(1); // Unsucessful exit
    
    }
    temp -> data = element;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        temp->next = NULL;
        head = temp;
    }




}
void insertAtEnd(){
    node * temp = NULL;
    temp = (node*)malloc(sizeof(node));
    if(temp == NULL){
        exit(1); // Unsucessful exit
    
    }
    temp -> data = element;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        node* p = head;
        while(p->next)
        p = p->next;
        p->next = temp;

    }


temp = NULL;
}
void insertAtPos(int position , int element ){
    int length = lengthSLL();
    if(position < 0 || position > length){
    cout<<"Invalid Position"<<endl;

    exit(1); //Unsucessful exit
    }
    else if(position == 0){
        insertAtBegin(element);
    }
    else if(position == length)
        insertAtEnd(element);
    else{
        node *p = head;
        for(int i=0 ; i<(position -1) ; i++)
            p =p->next;
        node *temp = NULL;
        temp = (node*)malloc(sizeof(node));
        if(temp == NULL){
            exit(1);

        }
        temp->data = element;
        temp->next = NULL;
        node *p = head;
        //node *p1 = head;
        int count =0;
        while(count<position -1){
            //if(count <position)
            p= p->next;
            // if(count <= position)
            // p1 = p1->next;
            count ++;
        }
        temp -> next = p->next;
        p->next = temp;
    }
    int middleElementsSLL(){
        int length = lengthSLL();
        int mid = length/2;
        node *p = head;

    }
    













































    }




// null = 0
//nullptr is pointer
  




int main(){
    int n;
    cin>>n ; 
    for(int i =0 ; i<n ; i++){
        int element;
        cin>>element;
        createNodeSLL(element);


    }
    displaySLL();





return 0;
}