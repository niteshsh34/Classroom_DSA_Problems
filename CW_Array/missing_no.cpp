#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the sorted array elements (positive integers only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int expectedNum = 1;  // The smallest positive number we are looking for
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == expectedNum) {
            expectedNum++;  // Move to the next expected number
        } else if (arr[i] > expectedNum) {
            // If current array element is greater than the expected number, we have found the missing number
            break;
        }
    }
    
    cout << "The smallest missing positive element is: " << expectedNum << endl;
    
    return 0;
}
