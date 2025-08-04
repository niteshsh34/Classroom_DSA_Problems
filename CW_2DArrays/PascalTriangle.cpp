#include<iostream>
using namespace std;

int main(){
    int m;
    cout << "Enter number of rows: ";
    cin >> m;

    int arr[m][m]; 

    for(int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;  // The first and last values in each row are 1
            } else {
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            }
        }
    }

    // Print Pascal's triangle
    cout << "Pascal Triangle:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
