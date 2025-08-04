#include<iostream>
using namespace std;
int pow(int n, int m){
    if(m == 0 ) return 1;
    else 
    return n*pow(n,m-1);
    
}
int main(){
    int n;
    cout<<"Enter number :- "<<endl;
    cin>>n;
    int m;
    cout<<"Enter power :- ";
    cin>>m;
    cout<<pow(n,m);
}