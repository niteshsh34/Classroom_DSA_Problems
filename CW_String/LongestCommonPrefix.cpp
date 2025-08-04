#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    vector<string>v;
    v.push_back("Nitesh");
    v.push_back("Naval");
    v.push_back("Nitin");
    //lexographically
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}