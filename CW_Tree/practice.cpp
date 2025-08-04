#include<iostream>
using namespace std;
class node{
    public :
    int val;
    node* left;
    node* right;
    node(int data){
        val = data;
        left = NULL;
        right = NULL;

    }};
    void display(node * root){
        if(root == NULL ) return ;
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }

int main(){
    node* a = new node(1);
    node* b = new node(10);
    node* c = new node(20);
    node* d = new node(100);
    node* e = new node(1000);
    node* f = new node(102);
    a->left = b;
    b->left = c;
    b->right = d;
    a->right = e;
    e->left = f;
    display(a);

}