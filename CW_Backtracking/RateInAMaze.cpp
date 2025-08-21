#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr;
int n;
int cnt = 0;

void solve(int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= n || arr[i][j] == 0)
        return;
    if (i == n - 1 && j == n - 1) {
        cnt++;
        return;
    }
    arr[i][j] = 0;
    solve(i + 1, j);
    solve(i - 1, j);
    solve(i, j + 1);
    solve(i, j - 1);
    arr[i][j] = 1;
}

int main() {
    cout << "Enter size of maze (n x n): ";
    cin >> n;
    arr.resize(n, vector<int>(n));
    cout << "Enter maze (1 for open, 0 for blocked):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    solve(0, 0);
    cout << "Number of paths = " << cnt << endl;
    return 0;
}
