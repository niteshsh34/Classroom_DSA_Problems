#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter characters :  ";
    getline(cin,s);
    vector<int>arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++; //This means to count the char how many times that char occured {cout<<arr[4];} e occured
    }
    cout<<arr[4]<<endl;
    int mx = 0;
     for(int i=0;i<26;i++){
        if(arr[i]>mx) mx = arr[i];
     }
     for(int i=0;i<26;i++){
        if(arr[i]==mx) {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout<<ch<<"  "<<mx<<endl;


        }
     }
}