#include<iostream>
using namespace std;
int main(){
    int n,i,num,count = 0;
    cout<<"Enter the number of students:-";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks :  ";
    for(i=0;i<=n-1;i++){
    cin>>marks[i];}
    cout<<"Enter the number: ";
    cin>>num;
    for(i=0;i<=n-1;i++){
    if(num<marks[i]){
    count++;
    cout<<marks[i]<<endl;}
    }
    cout<<count;
return 0;
}