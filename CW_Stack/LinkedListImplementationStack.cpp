//Linked Listimpllementation of stack
#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this-> val = val;
        next = NULL;

    }
};
class Stack{
    public:
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head == NULL){
            cout<<" Stack is empty "<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head == NULL){
            cout<<" Stack is empty "<<endl;
            return -1;}
            return head->val;
    
    }
    void print (Node* temp){
    if(temp == NULL) return;
    print(temp->next);
    cout<<temp->val<<" ";
    }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top();

    
}