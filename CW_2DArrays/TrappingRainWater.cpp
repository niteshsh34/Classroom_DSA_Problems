#include <iostream>
#include <vector>
#include <algorithm> // for std::min
using namespace std;

int main() {
    // Declare the vector and take input
    vector<int> height; 
    int n;

    // Taking input for the height vector size and its elements
    cout << "Enter the number of elements: ";
    cin >> n;

    height.resize(n); // Resize the vector to have 'n' elements

    cout << "Enter the elements of the height array: ";
    for (int i = 0; i < n; ++i) {
        cin >> height[i]; // Input values for height array
    }

    if (n < 3) {
        // If there are less than 3 elements, no water can be trapped
        cout << "Water trapped: 0" << endl;
        return 0;
    }

    // Previous greatest element array
    vector<int> arr(n); // Use vector instead of static array
    arr[0] = -1; // Initialize first element
    int max_left = height[0];

    for (int i = 1; i < n; i++) { // Start from 1 because arr[0] is already set
        arr[i] = max_left;
        if (max_left < height[i]) {
            max_left = height[i];
        }
    }

    // Next greatest element array
    vector<int> brr(n); // Use vector for dynamic size
    brr[n - 1] = -1; // Initialize last element
    int max_right = height[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        brr[i] = max_right;
        if (max_right < height[i]) {
            max_right = height[i];
        }
    }

    // Minimum array (minimum of previous and next greatest)
    vector<int> mini(n);
    for (int i = 0; i < n; i++) {
        mini[i] = min(arr[i], brr[i]);
    }

    // Calculating water trapped
    int water = 0;
    for (int i = 1; i < n - 1; i++) {
        if (height[i] < mini[i]) {
            water += (mini[i] - height[i]);
        }
    }

    cout << "Water trapped: " << water << endl;

    return 0;
}
