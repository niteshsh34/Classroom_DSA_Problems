#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows : - ";
    cin>>m;
    int n;
    cout<<"Enter no of columns : - ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements:- ";
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
            }
    cout<<endl;
    }
    //printing elements
    for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<"      ";
    }
    cout<<endl;
    }
//Finding sum
int sum= 0;
for(int i = 0; i<m ;i++){
        for(int j = 0; j<n; j++){
            sum = sum + arr[i][j];
        }
}
cout<<"Sum is : -  "<<sum;
}