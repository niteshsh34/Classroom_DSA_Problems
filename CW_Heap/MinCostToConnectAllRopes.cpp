//min cost you need to connect all the ropes
//using priority queue
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[] = { 2,7,4,1,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i =0;i<n;i++){
        pq.push(arr[i]);
        
    }
    while(pq.size()>0){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int c = a+b;
        pq.push(c);
    }
    cout<<pq.top()<<endl;
    return 0;
}