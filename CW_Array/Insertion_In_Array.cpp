#include<iostream>
#include<vector>
using namespace std;

int main() {  
    int n = 4;
    vector<int> arr = {10, 20, 30, 40};
    int ele = 50;
    int pos = 2;
    cout << "Array before insertion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
	
  	// Shifting elements to the right
    for(int i = n; i > pos; i--)
    arr[i] = arr[i - 1];

    // Insert the new element at index pos - 1
    arr[pos - 1] = ele;

    cout << "\nArray after insertion\n";
    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}
