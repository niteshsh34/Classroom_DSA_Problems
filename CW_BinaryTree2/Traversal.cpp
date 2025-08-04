#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
int levels(node *root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void nthlevel(node *root,int curr,int level){
    if(root == NULL) return;
    if(curr = level) cout<<root->data<<" ";
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}
void levelOrder(node *root){
    int h = levels(root);
    for(int i = 1;i<=h;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }

}
};
int main(){
    node *root = new node(1);
    node* root = new node(2);
    node* root = new node(3);
    node* root = new node(4);
    node* root = new node(5);
    node* root = new node(6);
    node* root = new node(7);
    a->left = b;
    b->left = d;
    b->right = e;
    a->right = c;
    c->left = f;
    c->right = g;
    nthlevel(a,1,3);
    nthlevel(a,1,2);
    nthlevel(a,1,1);
}