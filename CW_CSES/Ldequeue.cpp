#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define ll long long
ll arr[3000];
ll dp[3000][3000];

ll f(int i, int j) {
    if (i == j) return arr[i];
    if (dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max(arr[i] - f(i + 1, j), arr[j] - f(i, j - 1));
}

ll fbu(int n) {
    ll dp[n][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) {
        dp[i][i] = arr[i];
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            dp[i][j] = max(arr[i] - dp[i + 1][j], arr[j] - dp[i][j - 1]);
        }
    }
    return dp[0][n - 1];
}
int main() {
    int n;
    cout << "Enter n :- ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << fbu(n) << endl;
    return 0;
}
