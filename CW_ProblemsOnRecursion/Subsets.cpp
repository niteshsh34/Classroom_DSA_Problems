#include<iostream>
#include<vector>
using namespace std;
void printsubset(string str , string original  ){
    if(original == "") {
        cout<<str<<endl;
    return;
        }   
        string ch = original[0]; 
        printsubset(str+ch,original.substr(1));
        printsubset(str,original.substr(1));
}
int main(){
    string str = "abc"; 
    printsubset("",str);
}