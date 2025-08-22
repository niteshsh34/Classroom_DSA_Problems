#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertAtH(Node* &head, Node* &tail, int val) {
    Node* temp = new Node(val);
    if (head == NULL) {
        head = tail = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}

void insertAtT(Node* &head, Node* &tail, int val) {
    Node* temp = new Node(val);
    if (head == NULL) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void insertAtM(Node* &head, int val, int pos) {
    Node* node = new Node(val);
    if (pos == 1) {
        node->next = head;
        head = node;
        return;
    }
    Node* temp = head;
    int count = 1;
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) {
        delete node;
        return;
    }
    node->next = temp->next;
    temp->next = node;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
void deletion(Node* &head, Node* &tail, int pos){
    if(pos == 1){
        Node * del = head;
        head = head->next;
        del->next = NULL;
    }else{
    Node* temp = head;
    int count = 1;
    while(temp != NULL && count < pos -1){
        temp = temp->next;
        count++;
    }
    Node* forward = temp->next;
    temp->next = temp->next->next;
    forward->next = NULL;
}
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtT(head, tail, 10);
    insertAtT(head, tail, 20);
    insertAtT(head, tail, 30);
    printList(head);
    
    insertAtM(head, 99, 2);
    printList(head);
    deletion(head,tail,1);
    printList(head);
    return 0;
}
