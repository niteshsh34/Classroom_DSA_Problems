//Dutch Algorithm 
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {0, 1, 2, 1, 0, 1, 2, 1, 0, 1, 2, 1};

    // Print original vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    int n = v.size();
    int noz = 0, noo = 0, notw = 0;
    // Count occurrences of 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) noz++;
        else if (v[i] == 1) noo++;
        else notw++;
    }
    // Re-arrange the vector based on the counts
    for (int i = 0; i < n; i++) {
        if (i < noz) v[i] = 0;
        else if (i < (noz + noo)) v[i] = 1;
        else v[i] = 2;
    }
    // Print the sorted vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
