#include<iostream>
using namespace std;
void print(int a){
    if(a == 0) return ;
    print(a-1);
    cout<<a<<endl;
    
}
int main(){
    int n;
    cout<<"Enter number upto :- "<<endl;
    cin>>n;
    print(n);
}