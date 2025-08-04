#include<iostream>
using namespace std;
void swap(int &a , int &b){
    a = a - b;
    b = a + b;
    a = b - a;
}
int main(){
    int a , b;
    cout<<"Enter two values : "
    <<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"After swapping : "<<a<<"  "<<b;
return 0;
}
