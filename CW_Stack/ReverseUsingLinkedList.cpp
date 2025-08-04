#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data; 
    Node* next; 
};

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    Node* head = new Node();
    head->data = s.top();
    head->next = NULL;
    s.pop();
    Node* temp = head;
    while(!s.empty()){
        Node* newNode = new Node();
        newNode->data = s.top();
        newNode->    }
}