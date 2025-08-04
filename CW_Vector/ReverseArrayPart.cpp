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
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(5);
    display(v1);
     int s;
    cout<<"start :-  ";
    cin>>s;
    int e;
    cout<<"End :- ";
    cin>>e;
    int i = s;
    int j = e;
   
        while(i<=j){
        int temp = v1[i];
    v1[i] = v1[j];
    v1[j] = temp;
    i++;
    j--;
    }

    //or using for in another program
    display(v1);
    }

