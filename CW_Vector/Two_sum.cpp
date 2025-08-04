#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n,i,j,x;
    cout<<"Enter target: ";
    cin>>x;
    cout<<"Enter no of elements: ";
    cin>>n;
    cout<<"Enter array elements";
    for(i=0;i<n;i++){
    int p;
    cin>>p;
    v.push_back(p);
    }
    for(i=0;i<=v.size()-2;i++){
        for(j=i+1;j<=v.size()-1;j++){
    if(v[i]+v[j]==x){
    cout<<i<<","<<j<<endl;}
    }
    }
}
