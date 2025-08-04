#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {2,4,6,7,3,7,9,5,3,8,6};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int sum = 0;
    int maxIdx = 0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    maxSum = sum;
    int i = 1;
    int j = k;
    while(j<n){

    }
}