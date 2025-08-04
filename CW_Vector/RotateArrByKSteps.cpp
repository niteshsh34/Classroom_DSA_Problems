#include <iostream>
#include <vector>
using namespace std;
// Function to reverse a portion of the array
void reverseArray(vector<int>& arr, int start, int end) {

    while (start < end) {
        swap(arr[start], arr[end]);
        ++start;
        --end;
    }
}
// Function to rotate the array 'a' by 'k' steps
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    // Handle cases where k is greater than the array size 
    k = k % n;
    // Reverse the first 'n-k' elements
    reverseArray(arr, 0, n - k - 1);
    // Reverse the last 'k' elements
    reverseArray(arr, n - k, n - 1);
    // Reverse the entire array
    reverseArray(arr, 0, n - 1);
}
int main() {
    vector<int> myArray;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        int element;
        cout << "Element " << i + 1 << ": ";
        cin >> element;
        myArray.push_back(element);
    }
    int k;
    cout << "Enter the number of steps to rotate (k): ";
    cin >> k;
    // Call the function to rotate the array by k steps
    rotateArray(myArray, k);
     // Print the rotated array
    cout << "Rotated array:" << std::endl;
    for (size_t i = 0; i < myArray.size(); ++i) {
        cout << myArray[i] << " ";
    }
    cout << std::endl;
    return 0;
}