//CONVERT INFIX TO POSTFIX
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int prior(char ch){
    if(ch=='+' || ch=='-'){
        return 1;
    }else if(ch=='/' || ch=='*'){
        return 2;
    }else if(ch=='^'){
        return 3;
    }

    return 0;
}

string convert(string infix){
    string postfix = "";
    int i = 0;
    stack<int> s;
    
    while(infix[i]!='\0'){
        if(infix[i]>='A' && infix[i]<='Z' || infix[i]>='a' && infix[i]<='z'){
            postfix +=infix[i];
            i++;
        }else if(infix[i]=='('){
            s.push(infix[i]);
            i++;
        }else if(infix[i]==')'){
            while(s.top()!='('){
                postfix+=s.top();
                s.pop();
            }
            s.pop();
            i++;
        }else{
            while(!s.empty() && prior(infix[i]) <= prior(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main(){
    string infix;
    cin>>infix;
    string postfix;
    postfix = convert(infix);
    cout<<"POSTFIX EXPRESSION: "<<postfix<<endl;
    return 0;
}