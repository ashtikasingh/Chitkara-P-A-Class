#include<iostream>
using namespace std;

int position = 0;
int arr[12];
int count = 0;
void push( int a){
    arr[position] = a;
    position++;
    count++;
}

void pop(){
    arr[position-1] = 0;
    position--;
    count--;
}

void top(){
    cout<<arr[count-1];
}

void display(){
    cout<<endl;
    for(int i = count-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,c;
    cin>>n;
    
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