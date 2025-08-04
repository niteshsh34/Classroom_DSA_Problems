#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string v[] = {"3232","4214","1244","1424","4532"};
    int max = stoi(v[0]);
    string smax = v[0];
    for(int i = 0; i<5;i++){
    if(stoi(v[i])>max){
        max = stoi(v[i]);
        smax = v[i];
    }
    }
    cout<<smax;
}