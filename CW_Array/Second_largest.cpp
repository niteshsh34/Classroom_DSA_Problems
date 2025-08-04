#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,i,max,smax;
    cout<<"Enter the number of students:-";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks :  ";
    for(i=0;i<=n-1;i++){
    cin>>marks[i];}
    max = marks[0];
    for(i=0;i<=n-1;i++){
    if(max<marks[i]){
    max = marks[i];}
    }
    smax=INT_MIN;
    for(i=0;i<=n-1;i++){
    if(smax<marks[i] && marks[i]!=max){
        smax=marks[i];
    }
   
    }
    cout<<max<<endl;
    cout<<smax;
return 0;
}