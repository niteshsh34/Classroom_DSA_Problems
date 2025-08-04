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
    int i,start,end;
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(11);
    v1.push_back(34);
    v1.push_back(56);
    v1.push_back(23);
    display(v1);
    cout<<"Start: "<<endl;
    cin>>start;
    cout<<"End: "<<endl;
    cin>>end;
    vector<int> v2(v1.size());
        for(i=start;i<end;i++){
    v2[start] = v1[v1.size()- 1 - start];
    }
    display(v2);
    }

