#include<iostream>
using namespace std;
int main(){
    int n,i,ele;
    cout<<"Enter the number of students:-";
    cin>>n;
    int arr[n];
    cout<<"Enter the marks :  ";
    for(i=0;i<=n-1;i++)
    cin>>arr[i];
    cout<<"Enter the element you want to search : ";
    cin>>ele;
 for(i = 0; i < n; i++) {
    if(arr[i] == ele) {
        cout << "Element found" << endl;
        return 0;  // Exit once found
    }
}

cout << "Element not found" << endl;
}
