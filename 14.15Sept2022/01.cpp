//BALANCING PARANTHESIS PROBLEM

#include<iostream>
#include<string>
#include<stack>
using namespace std;


bool balanced(string input){
    int i = 0;
    stack<int> s;
    char b;

    while(input[i]!='\0'){
        if(input[i]=='(' || input[i]=='{' || input[i]=='[' ||input[i]=='<') {
            s.push(input[i]);
        }

        if(s.empty()){
            return false;
        }

        switch(input[i]){
            case ')':
            b = s.top();
            s.pop();
            if(b=='{' || b=='[' ||b=='<'){
                return false;
            }
            break;

            case '}':
            b = s.top();
            s.pop();
            if(b=='(' || b=='[' ||b=='<'){
                return false;
            }
            break;

            case ']':
            b = s.top();
            s.pop();
            if(b=='{' || b=='(' ||b=='<'){
                return false;
            }
            break;

            case '<':
            b = s.top();
            s.pop();
            if(b=='{' || b=='[' ||b=='('){
                return false;
            }
            break;
        }
        i++;
    }

    return(s.empty());

}

int main(){
    string input;
    cin>>input;
    if (balanced(input)){
        cout<<"BALANCED BRACKETS"<<endl;
    }else{
      cout<<"NOT BALANCED BRACKETS"<<endl;  
    }
    return 0; 
}