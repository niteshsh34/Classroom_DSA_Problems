#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    //or by
    // vector<vector<int>>v(3,vector<int>(4));  // 4 is no of columns
    // // vector<vector<int>>v(3,vector<int>(4,2));  //2 is repeatedly 2 will print
vector<int>v1;
v1.push_back(3);
v1.push_back(34);
v1.push_back(65);
v1.push_back(8);
vector<int>v2;
v2.push_back(9);
v2.push_back(5);
v2.push_back(3);
v2.push_back(6);
v2.push_back(8);
vector<int>v3;
v3.push_back(2);
v3.push_back(1);
v3.push_back(8);
v3.push_back(3);
v3.push_back(9);
v3.push_back(4);

v.push_back(v1);
v.push_back(v2);
v.push_back(v3);
cout<<v[0][2]<<endl<<endl;

cout<<v1[0]<<endl<<endl;

for(int i = 0; i<4;i++){
    cout<<v1[i]<<"  ";
}
cout<<endl<<endl;

cout<<"Row size  "<<v.size();
cout<<endl<<endl;
//cout<<"Column size  "<<v[i].size();


for(int i = 0; i<v.size();i++){
        for( int j = 0; j<v[i].size();j++)
    cout<<v[i][j]<<"  ";
    
}
}