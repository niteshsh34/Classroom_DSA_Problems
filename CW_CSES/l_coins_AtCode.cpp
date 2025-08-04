// l-coins atcoder
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstring>
using namespace std;
vector<vector<double>>dp;
double f(vector<double> &p, int i, int x ){
    if(x==0) return 1;
    if (i == -1) return 0;
    if(dp[i][x] >-0.9) return dp[i][x];
    return dp[i][x] = f(p, i - 1, x-1)*p[i] +  f(p, i-1, x)*(1-p[i]);
}

int main(){
    
    int n;
    cout << "Enter n :- ";
    cin >> n;
    dp.clear();
    dp.assign(n, vector<double>(n + 1, -1.0));
    vector<double> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    cout << fixed << setprecision(10);
    cout << f(p, n - 1, (n + 1) / 2) << endl;
    return 0;
}