#include<iostream>
using namespace std;
int stair(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    else 
    return stair(n-1)+stair(n-2);
    //We can jump only 1 or 2 stair
    
    
}
int main(){
    int n;
    cout<<"Enter number of stair  :- "<<endl;
    cin>>n;
    cout << "No of ways to climb stairs " << n << " is: " << stair(n) << endl;
}