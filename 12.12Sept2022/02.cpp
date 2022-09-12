#include<iostream>
using namespace std;

struct Node{
    int data; 
    struct Node *next; 
};

struct Node* head = NULL; 

void push(int new_data){
    struct Node *new_node = new Node; 
    new_node->data = new_data; 
    new_node->next = head; 
    head = new_node; 
}

void pop(){
    head = head->next;
}

void top(){
    cout<<head->data<<endl;
}

void display(){
     if(head==NULL){
        cout<<"No elments in the list"<<endl;;
    }
    struct Node* ptr = head;
    while(ptr!=NULL){  
        cout<<ptr->data<<endl; 
        ptr=ptr->next; 
    }
}
int main(){
    int c;
    do{
        cout<<"ENTER 1,2,3,4 or 5"<<endl;
        cin>>c;
        switch(c){
            case 1:
            int ele;
            cin>>ele;
            push(ele);
            cout<<"ENTER ELEMENT IN THE FUCNTION"<<endl;
            cout<<"PUSH"<<endl;
            break;
            case 2:
            pop();
            cout<<"POP"<<endl;
            break;
            case 3:
            top();
            cout<<"TOP"<<endl;
            break;
            case 4:
            display();
            cout<<"DISPLAY"<<endl;
            break;
            case 5:
            cout<<"EXIT"<<endl;
            break;
            default:
            cout<<"INVALID"<<endl;
            break;
        }
    }while(c!=5);

    return 0;
}