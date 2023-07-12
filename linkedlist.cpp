#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
    //DEFAULT CONSTRUCTOR
    node(){
        data = 0;
        next = NULL;

    }
    //parametrised constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }


};
typedef struct node node;
node *head = NULL;
void ararytoSll(int array[] , int ararylength){
    for(int i =0 ; i<ararylength ; i++){
        node *temp = NULL; 
        temp = new node(array[i]);
        if(temp == NULL)
            exit(1);
        else{
            node *p = head;
            while(p->next)
            {
                p = p->next;

            }
            p->next = temp;

        
        }

        temp = NULL;
    }
}
void display(){+
    node *p = head;
    while(p){
        cout<<p->data <<" ";
        p = p->next;
    }
    cout<<endl;
}
void insertAtEnd(int element){
    node * temp = NULL;
    temp = new node(element);
    if(temp == NULL)
        exit(1);
    if(head == NULL){
        head = temp;

    }
    else{
        temp -> next = head;
        head = temp ;

    }
    temp = NULL;
}
int main(){
    int n;
    cin>>n;
    int arr[] = {2 ,3 ,4 ,5, 6};

    ararytoSll(arr , 5);


    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        insertAtEnd(element);
    }
    display();



    
    
}
//hw --> find  a triiplet from three linked list which 
//sum = even no.
