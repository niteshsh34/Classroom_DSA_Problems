//wrong method 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
// int n = v.size();
// int i = 0;
// int j  ;
// while(i<j){
//     if(v[i]==0) i++;
//     if(v[j]==1) j--;
//     else if(v[i]==1 && v[j]==0){
//     v[i]=0;
//     v[j]=1;
//     i++;
//     j--;
//     }
//     }
// int k = n-1;
// while(j<k){
//     if(v[i]==1) i++;
//     if(v[j]==2) j--;
//     else if(v[i]==2 && v[j]==1){
//     v[i]=1;
//     v[j]=2;
//     i++;
//     j--;
//     }
// }
// for(int i=0;i<v.size();i++){
// cout<<v[i]<<" ";
// }

// cout<<endl;
// return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {0, 1, 2, 1, 0, 1, 2, 1, 0, 1, 2, 1};
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    int n = v.size();
    int i = 0, j = 0, k = n - 1;
    // Dutch National Flag algorithm
    while(j <= k){
        if(v[j] == 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j++;}
        else if(v[j] == 1){
            j++;}
        else if(v[j] == 2){
            int temp = v[j];
            v[j] = v[k];
            v[k] = temp;
            k--;}
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
