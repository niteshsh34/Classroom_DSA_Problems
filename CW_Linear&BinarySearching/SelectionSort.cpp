#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 9,99,23,11,4,6,2};  
    int n = sizeof(arr) / sizeof(arr[0]); 
    int m;
    for(int i = 0; i < n - 1; i++) {
        m = i;
        for(int j = i ; j < n; j++) {
            if(arr[j] < arr[m]) {
                m = j;
            }
        }
        swap(arr[m], arr[i]);
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
