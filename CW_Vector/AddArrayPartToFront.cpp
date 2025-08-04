//Not completed vector sort the array ya rotate the array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    int k,i,j;
    cout<<"Target :-  ";
    cin>>k;                          //😂😂😂
    vector<int> v1(v.size());
    for (int i = 0; i < k; i++) {
        v1[i] = v[v.size() - k + i];
    }

    
    cout << "Updated vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
    cout << endl;

    return 0;
}