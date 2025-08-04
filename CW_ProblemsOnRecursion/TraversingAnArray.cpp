#include<iostream>
#include<vector>
using namespace std;
void display(int arr[] , int n , int idx ){
    if(idx == n) return;
    cout<<arr[idx]<<"  ";
    display(arr,n,idx+1);
}

void displayv(vector<int> & v , int idx){
    if(idx == v.size()) return;
    cout<<v[idx]<<"  ";
    displayv(v, idx+1);
}

int main(){
    int arr[] = {2,3,5,2,4,7,8,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
     //int n = arr.size()/arr[0].size(); ❌❌❌❌
    vector<int>v = {2,5,3,5,36};
    display(arr,n,0);
    cout<<endl;
    displayv(v,0);
}