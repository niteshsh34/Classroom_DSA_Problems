#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a, vector<int>&b, vector<int>&res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++] = a[i++];
        }
        else{
            res[k++] = b[j++];
        }

    }
    if(j == b.size()){
        while (i < a.size()) {
            res[k++] = a[i++];
        }
    }
    if(i == a.size()){
        while (j < b.size()) {
            res[k++] = b[j++];
        }
    }
}
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n <= 1){
        return;
    }
    int n1 = n/2;
    int n2 = n-n1;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i = 0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i = 0; i<n2; i++){
        b[i] = v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
}

int main(){
    vector<int> v = {1,3,2,4,15,6,17,10};
    cout << "Original array: ";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<"  ";
    }
    mergeSort(v);
    cout<<endl;
    cout << "Sorted array: ";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
