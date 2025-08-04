//Reverse a stack using only stack operations
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    
    stack<int> s1;
    while(!s1.empty()){
        s1.push(s.top());
        s.pop();
    }
    
    while (!s1.empty()){
        s.push(s1.top());
        s1.pop();
    }
    cout<<"Stack after reversing: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
