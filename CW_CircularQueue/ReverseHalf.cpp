#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reversehalf(int arr[],int n){
    queue<int> q;
    stack<int>s;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
    }
    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        q.push(s.top());
        s.pop();
    }

}
void display(){ 
    for(int i = 0; i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
}