//Stock Span problem
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]= { 100,80,60,70,60,75,85};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    stack<int> s;
    int span[n];
    span[0]=1;
    s.push(0);
    for(int i = 1;i<n;i++){
        while(!s.empty() && arr[s.top()] <=arr[i]){
            s.pop();
        }
        if (s.empty()) {
            span[i] = i + 1;
        } else {
            span[i] = i - s.top();
        }
        s.push(i);
    }
    cout<<endl;
        for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}
