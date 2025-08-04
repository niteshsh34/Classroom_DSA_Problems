#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = a.size() - 1, j = b.size() - 1, k = res.size() - 1;

    while (i >= 0 && j >= 0) {
        if (a[i] >= b[j]) {  
            res[k--] = a[i--];  
        } else {
            res[k--] = b[j--];
        }
    }

    while (i >= 0) {
        res[k--] = a[i--];
    }

    while (j >= 0) {
        res[k--] = b[j--];
    }
}

void mergeSort(vector<int>& v) {
    int n = v.size();
    if (n <= 1) return; 

    int n1 = n / 2;
    int n2 = n - n1;

    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }

    mergeSort(a);
    mergeSort(b);
    merge(a, b, v);
}

int main() {
    vector<int> v = {1, 3, 2, 4, 15, 6, 17, 10};
    cout << "Original array: ";
     for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout << endl;
    mergeSort(v);
    cout << "Sorted Decreasing Order : ";
     for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
