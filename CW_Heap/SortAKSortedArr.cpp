#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int k = 4;
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v;
    for (int i = 0; i < n; i++){
        pq.push(arr[i]);
        if (pq.size() >= k){
            v.push_back(pq.top());
        pq.pop();
        }
    }
    while (!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}