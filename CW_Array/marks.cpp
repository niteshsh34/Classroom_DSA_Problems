#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number of students:-";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks :  ";
    for(i=0;i<=n-1;i++)
    cin>>marks[i];
    for(i=0;i<=n-1;i++)
    if (marks[i]<35)
    cout<<marks[i];
return 0;
}
