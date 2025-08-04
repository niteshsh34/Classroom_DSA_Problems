#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};  
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout<<"Enter target";    
    int target ;       
    cin>>target; 
    for (int i = 0; i < n; i++) {