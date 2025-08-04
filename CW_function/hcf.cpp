#include<iostream>
using namespace std;

int hcf(int a , int b){
int max = 1;
for (int i=1;i<=min(a,b);i++){
if(a%i == 0 && b%i == 0 )
max = i;}
return max;
}
int main(){
    int a; 
    cout<<"Enter 1st number : ";
    cin>>a;
    int b; 
    cout<<"Enter 2nd number : ";
    cin>>b;

    cout<<hcf(a,b);
return 0;
}