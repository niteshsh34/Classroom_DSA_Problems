#include<iostream>
using namespace std;
int main(){
    int n,i,sum = 0;
    cout<<"Enter the number of elements:-";
    cin>>n;
    int add[n];
    cout<<"Enter the numbers :  ";
    for(i=0;i<=n-1;i++){
    cin>>add[i];}
    for(i=0;i<=n-1;i++){
    sum = sum + add[i];}
    cout<<sum;
    return 0;
}