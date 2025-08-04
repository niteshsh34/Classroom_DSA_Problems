//Next gretaer element
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]= { 2,4,7,5,6,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    stack<int> s;
    int nge[n];
    nge[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop();
        }
        if(s.size()==0){
            nge[i]=-1;
        }
        else{
            nge[i]=s.top();
        }
        s.push(arr[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    return 0;

}
