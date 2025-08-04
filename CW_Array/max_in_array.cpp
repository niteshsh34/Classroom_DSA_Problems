#include<iostream>
using namespace std;
int main(){
    int n,i,max;
    cout<<"Enter the number of students:-";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks :  ";
    for(i=0;i<=n-1;i++){
    cin>>marks[i];}
    max = marks[0];
    for(i=0;i<=n-1;i++){
    if(max<marks[i]);
    max = marks[i];
    }
    cout<<max;
return 0;
}
