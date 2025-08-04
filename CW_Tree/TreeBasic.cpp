#include <iostream>
#include<climits>
using namespace std;
class node {
public:
    int data;
    node* left;
    node* right;
    node(int root) { 
        data = root; 
        left = NULL;
        right = NULL;
    }
    void display(node* root) {
        if (root == NULL) return;
        cout << root->data << " ";
        display(root->left);
        display(root->right);
    }
    int size(node* root) {
        if (root == NULL) return 0;
        return  1 + size(root->left) + size(root->right);
    }
    int sum(node* root){
        if(root==NULL) return 0;
        return sum(root->left) + sum(root->right) + root->data;
    }
    int maxIntree(node* root){
        if(root == NULL) return INT_MIN;
        return max(root->data,max(maxIntree(root->left), maxIntree(root->right)));
    }
    int pdt(node *root){
        if(root == NULL) return 1 ;
        return (root->data*pdt(root->left)*pdt(root->right));
    }
    int height(node *root){
        if(root == NULL) return 0;
        int h;
        h = max(height(root->left),height(root->right)) + 1;
        return h;
    }
    
};
int main() {
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
    a->left = b;
    b->left = d;
    b->right = e;
    a->right = c;
    c->left = f;
    c->right = g;

    a->display(a); 
    cout << endl;

    cout<<"Size:- "<<a->size(a);
    cout << endl;

    cout<<"Sum:- "<<a->sum(a);
    cout << endl;

    cout<<"MAximum:- "<<a->maxIntree(a);
    cout << endl;

    cout<<"Product:- "<<a->pdt(a);
    cout << endl;

    cout<<"Height:- "<<a->height(a);
    cout << endl;
}
