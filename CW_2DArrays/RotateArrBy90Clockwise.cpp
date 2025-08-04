#include <iostream>
using namespace std;
int main(){
	int a[3][3];
    cout<<"Enter elements:- ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cin>>a[i][j];}
	}
     cout<<"Original Array :- "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	int b[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		b[i][j]=a[3-1-j][i];	//3 = size of matrix
		}
	}
    cout<<"Rotated Array :- "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}