#include<iostream>
using namespace std;
void print(int i, int a){
    if(i > a) return ;
    cout<<i<<endl;
    print(i+1,a);
    
    
}
int main(){
    int n;
    cout<<"Enter number upto :- "<<endl;
    cin>>n;
    print(1,n);
}