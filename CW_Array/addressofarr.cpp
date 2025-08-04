#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,34,5,4,3};
    cout<<&arr[0]<<endl;   //address of 1st element
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr<<endl;   //address of 1st element
    cout<<arr<<endl;  //address of 1st element
    cout<<arr[0]<<endl;
return 0;
}