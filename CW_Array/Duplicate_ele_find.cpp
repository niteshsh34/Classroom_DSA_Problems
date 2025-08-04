#include<iostream>
using namespace std;
int main(){
    int n,i,j,max;
    cout<<"Enter the number of students:-";
    cin>>n;
    int arr[n];
    cout<<"Enter the marks :  ";
    for(i=0;i<=n-1;i++){
    cin>>arr[i];}
    for(i=0;i<=n;i++){
    for(j=i+1;j<=n;j++)
    if(arr[i]=arr[j]){
    cout<<arr[i];}
    break;
    }
return 0;
}