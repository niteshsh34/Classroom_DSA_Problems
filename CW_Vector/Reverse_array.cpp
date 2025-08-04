#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  ";
}
cout<<endl;
}
int main(){
    vector<int> v1;
    int i;
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(5);
    display(v1);
    cout << "Size of v1: " << v1.size() << endl;
    vector<int> v2(v1.size());
        for(i=0;i<v1.size();i++){
    v2[i] = v1[v1.size() - 1 - i];
    }
    display(v2);
    }

