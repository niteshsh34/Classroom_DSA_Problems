//Previous greater element
#include<iostream>
using namespace std;
#include<stack>
int main(){
    int arr[]= { 2,4,7,5,6,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    stack<int> s;
    int pre[n];
    pre[0]=-1;
    for(int i=1;i<n;i++){
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop();

        }
        if(s.size() == 0){
            pre[i] = -1;
        }
        else {
            pre[i] = s.top();
        }
        s.push(arr[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
}
