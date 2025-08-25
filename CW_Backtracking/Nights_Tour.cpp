#include <bits/stdc++.h>
using namespace std;
int n;

// correct knight moves
vector<int> dx{-2,-1,1,2,2,1,-1,-2};
vector<int> dy{1,2,2,1,-1,-2,-2,-1};

void print(vector<vector<int>> &grid, int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<grid[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"******\n";
}

bool isSafe(vector<vector<int>> &grid, int i, int j, int n){
    if(i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == -1)
        return true;
    return false;
}

void f(vector<vector<int>> &grid, int i, int j, int n, int count){
    if(count == n*n - 1){
        grid[i][j] = count;
        print(grid,n);
        grid[i][j] = -1;
        return;
    }

    grid[i][j] = count;

    for(int k = 0; k < 8; k++){
        if(isSafe(grid, i+dx[k], j+dy[k], n)){
            f(grid, i+dx[k], j+dy[k], n, count+1);
        }
    }

    grid[i][j] = -1; // backtrack
}

int main(){
    cout << "Enter input ";
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, -1));
    f(grid, 0, 0, n, 0);
}
