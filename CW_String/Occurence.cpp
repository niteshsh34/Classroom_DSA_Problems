#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter characters :  ";
    getline(cin,s);
    cout<<"Characters are:  "<<endl;
    cout<<s;
    char  a;
    cout<<"Enter the character you want to find occurence:-  ";
    cin>>a;
    int count  = 0;
    for(int i=0;i!=s.length();i++){
    if (s[i] == a)
    count++; }
    cout<<count;
}