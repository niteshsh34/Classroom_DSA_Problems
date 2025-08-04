#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int>st;
void buildtree(int arr[],int i,int lo,int hi){
        int mid = (lo+hi)/2;
        buildtree(arr,2*i+1,lo,mid);
        buildtree(arr,2*i+2,mid+1,hi);
        st[i] = max(st[2*i+1],st[2*i+2]);
    }

int getm(int i ,int lo,int hi , int& l,int& r){
    if(l>hi || r<lo) return INT_MIN; 
    if(lo>=l && hi<=r) return st[i];
    int mid = (lo+hi)/2;
    int leftmax = getm(2*i+1,lo,mid,l,r);
    int rightmax = getm(2*i+2,mid+1,hi,l,r);
    return max(leftmax,rightmax);
}

int main(){
    int arr[] = {1,3,6,2,9,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    st.resize(4*n);
    buildtree(arr,0,0,n-1);
    int l,r;
    cout<<"Enter range :- ";
    cin>>l>>r;
    cout<<getm(0,0,n-1,l,r);
}