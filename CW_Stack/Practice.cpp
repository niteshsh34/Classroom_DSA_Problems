#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[] = {100, 80, 101, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    stack<int> s;
    int pg[n];
    pg[0] = 1; 
    s.push(0);
    for (int i = 1; i < n; i++){
        while (s.size()>0 && arr[s.top()] <= arr[i]){
            s.pop();
        }
        if (s.size()==0)
            pg[i] = i + 1;
        else
            pg[i] = i-s.top();
        s.push(i);
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << pg[i] << " ";
    }
}