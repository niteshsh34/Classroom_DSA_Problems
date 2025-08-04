#include <bits/stdc++.h>
using namespace std;

vector<int> getdigits(int n) {
    vector<int> result;
    while (n > 0) {
        if (n % 10 != 0) 
            result.push_back(n % 10);
        n /= 10;
    }
    return result;
}

vector<int> dp( 100000000, -1);

int f(int n) {
    if (n == 0) return 0;
    if (n <= 9) return 1;
    if (dp[n] != -1) return dp[n];

    vector<int> d = getdigits(n);
    int result = INT_MAX;
    for (int i = 0; i < d.size(); i++) {
        result = min(result, f(n - d[i]));
    }

    return dp[n] = 1 + result;
}


int fbu(int n) {
    dp[0] = 0;
    for (int i = 1; i <=9; i++) dp[i]=1;
    for(int i =10;i<n;i++){
    vector<int> d = getdigits(n);
    int result = INT_MAX;
    for (int i = 0; i < d.size(); i++) {
        result = min(result, dp(n - d[i]));
    }

    dp[n] = 1+result;
}
}

int main() {
    int n;
    cin >> n; 
    cout << fbu(n) << endl;
}
