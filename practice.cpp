#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};
void level(Node* root,int curr,int levelno){
if(root == NULL) return ;
if(curr == level) {
    cout<<root->val;
    ans.push_back(root->val);
}
l = max(level(root->left,ans,levelno),level(root->right,ans,levelno)) + 1;
return ans;
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    Node* i = new Node(9);
    a->left = b;
    b->left = d;
    a->right = c;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    d->right = i;
}