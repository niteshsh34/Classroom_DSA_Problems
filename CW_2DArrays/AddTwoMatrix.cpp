#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row and columns :- ";
    cin>>m>>n; //size
    //Matrix1
    int arr1[m][n];
    cout<<"Enter elements:- ";
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cin>>arr1[i][j];
            }
    cout<<endl;
    }
    //printing elements of matrix 1
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<arr1[i][j]<<"      ";
    }
    cout<<endl;
    }
    //Matrix 2
    int arr2[m][n];
    cout<<"Enter elements:- ";
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cin>>arr2[i][j];
            }
    cout<<endl;
    }
    //printing elements of matrix 2
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<arr2[i][j]<<"      ";
    }
    cout<<endl;
    }
//Finding sum
int sum[m][n];
    cout<<"Enter elements:- ";
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
            }
    cout<<endl;
    }
    //printing elements of matrix 2
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<"Sum"<<sum[i][j]<<"  ";
    }
    cout<<endl;
    }

}