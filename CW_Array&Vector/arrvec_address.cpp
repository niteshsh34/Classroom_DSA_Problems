#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[] = {6,4,6,2,7,3};
    int* ptr = arr;  //giving address
    int* ptr1 = &arr[0];
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<arr[0]<<endl;
    cout<<arr<<endl;
    cout<<ptr[0]<<endl;
    cout<<*ptr<<endl;
    for(i=0;i<6;i++){
    cout<<ptr[i]<<"  ";
    }

return 0;
}