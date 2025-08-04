// Harry Potter Mixtures
#include <iostream>
#include <vector>
#include <climits>
#define ll long long int
using namespace std;

vector<vector<ll>> dp(1001, vector<ll>(1001, -1));
ll g(vector<int> &colors, int i, int j)
{
    ll result = 0;
    for (int m = i; m <= j; m++)
    {
        result = (result % 100 + colors[m] % 100) % 100;
    }
    return result;
}
ll f(vector<int> &colors, int i, int j)
{
    if (i == j)
        dp[i][j] = 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    ll ans = INT_MAX;
    for (int k = i; k < j; k++)
    {
        ans = min(ans, f(colors, i, k) + f(colors, k + 1, j) + g(colors, i, k) * g(colors, k + 1, j));
    }
    return dp[i][j] = ans;
}
int main()

{
    cout<<"Enter:- "<<endl;
    int n;
    while (cin >> n)
    {
        vector<int> colors;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            colors.push_back(x);
        }
        ll ans = f(colors, 0, colors.size() - 1);
        cout << ans << endl;
    }
}