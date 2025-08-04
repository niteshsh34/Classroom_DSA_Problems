// Minimum Product Sum
//  Given an array of integers, the task is to find the minimum product subset in array.
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minproduct(vector<int> &arr)
{
    int n = arr.size();
    int cn = 0;
    int cz = 0;
    int pro_neg = 1;
    int pro_pos = 1;
    int largestneg = INT_MIN;
    int smallpos = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cz++;
        }
        if (arr[i] < 0)
        {
            cn++;
            pro_neg *= arr[i];
            largestneg = max(arr[i], largestneg);
        }
        if (arr[i] > 0)
        {
            pro_pos *= arr[i];
            smallpos = min(arr[i], smallpos);
        }
    }
    if (cn == 0)
    {
        if (cz > 0)
            return 0;
        else
            return *max_element(arr.begin(), arr.end());
    }
    if(cn%2 == 0){
        return pro_neg/largestneg;
    }
    if(cn%2!=0){
        return pro_neg;
    }


}
int main()
{
    int n;
    cout << "Enter n :- ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Minimum product subset is :- " << minproduct(arr) << endl;
    return 0;
}