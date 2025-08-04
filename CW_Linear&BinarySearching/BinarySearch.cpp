#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};  
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout<<"Enter target";    
    int target ;       
    cin>>target;                   
    int low = 0;
    int high = n - 1;
    int result = 0; 
    for (int i = 0; i < n; i++) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;  
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }
    if(result!=0){
    cout << "Target " << target << " found at index: " << result << endl;
    }
    else cout<<"Target not found";

}
