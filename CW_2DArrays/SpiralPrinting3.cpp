#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row and columns :- ";
    cin>>m>>n;
    //Matrix1
    int arr[m][n];
    cout<<"Enter elements:- ";
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
            }
    cout<<endl;
    }
    //printing elements of matrix 1
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<"   ";
    }
    cout<<endl;
    }
    
cout<<"Spiral Printing:- "<<endl;
    for(int i = m-1; i>=0 ;i--){
        if(i%2!=0){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<"  ";
        }
        }
    else 
    for(int j = n-1; j>=0; j--){
            cout<<arr[i][j]<<"  ";
        }

}
}