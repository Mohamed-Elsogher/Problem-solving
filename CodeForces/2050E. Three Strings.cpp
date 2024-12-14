//Hady17 
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
    dp[0][0] = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (i > 0) { 
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + (c[i + j - 1] != a[i - 1]));
            }
            if (j > 0) { 
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + (c[i + j - 1] != b[j - 1]));
            }
        }
    }
    cout << dp[n][m] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
                     //Nagiola :>
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
