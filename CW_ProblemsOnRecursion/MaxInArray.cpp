#include<iostream>
#include<climits>
using namespace std;
void maxi(int arr[] , int n , int idx, int max ){
    if(idx == n) {
    cout<<max;
    return;}
    if(max<arr[idx]) max = arr[idx];
    maxi(arr,n,idx+1,max);
}

int main(){
    int arr[] = {2,3,5,2,4,0,7,8,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
     //int n = arr.size()/arr[0].size(); ❌❌❌❌
    maxi(arr,n,0,INT_MIN);
}