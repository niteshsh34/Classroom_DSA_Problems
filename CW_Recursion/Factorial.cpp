#include<iostream>
using namespace std;
int fact(int n){
    int fac = 1;
    if(n == 0 || n == 1) return 1;
    else 
    return fac = n*fact(n-1);
    
    
}
int main(){
    int n;
    cout<<"Enter number for factorial :- "<<endl;
    cin>>n;
    cout<<fact(n);
}