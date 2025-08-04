#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int k = 4;
    int arr[] = {10, 23, -45, 32, 9, 67, 89, 45, 23, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    cout << pq.top();
}