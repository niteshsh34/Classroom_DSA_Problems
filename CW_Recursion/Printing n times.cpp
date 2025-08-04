#include<iostream>
using namespace std;

void wish(int n){

if(n==0) return;
cout<<"Good Morning"<<endl;
wish(n-1);
}
int main(){
    int n;
    cout<<"Enter number of times to wish :- "<<endl;
    cin>>n;
    wish(n);

}
