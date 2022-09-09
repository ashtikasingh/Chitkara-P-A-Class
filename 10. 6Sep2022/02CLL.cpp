#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data; //linked ka aage jo hota hai
    struct Node *next; //basically a pointer pointing to next node so datatype is node 
};
struct Node* head = NULL; //globally declared

void insert_begin(int new_data){
    struct Node *new_node = new Node; //insert karna hai toh new data dalne ki ke liye node ki need hai so phele new node banaige
    new_node->prev = NULL; 
    new_node->data = new_data; //new_node jo name diya usko data diya
    new_node->next = head; //new_node mai jo nextptr hoga vo head ke ptr ko point karega...kyuki yeh begining mai lag raha hai
    if(head!=NULL){
        head->prev = new_node;
    } 
    head = new_node; 
    }

void display(){
    struct Node* ptr = head;
    do{
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }while(ptr!=head)
}