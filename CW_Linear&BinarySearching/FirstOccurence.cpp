#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,5,6,6,6,7,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target ;
    cout<<"Enter target :-  ";
    cin>>target;
    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            if(arr[mid-1]!=target){
                flag = true;
                cout<<mid;
                break;
            }
            else {
                high = mid - 1;
            }
            } 
        else if (arr[mid] < target) low = mid + 1; 
        else high = mid - 1; 
        
    }
    if(flag == false) cout<< -1;
}