#include<iostream>
using namespace std;
void main
  // Function to sort the array using bubble sort algorithm.
  void bubbleSort(int arr[], int n)
  {
    // Your code here
    for (int i = n - 2; i >= 0; i--)
    {
      bool swapped = 0;
      for (int j = 0; j <= i; j++)
      {
        if (arr[j] > arr[j + 1])
        {
          swapped = 1;
          swap(arr[j], arr[j + 1]);
        }
      }
      if (swapped == 0)
        break;
    }
  }
}