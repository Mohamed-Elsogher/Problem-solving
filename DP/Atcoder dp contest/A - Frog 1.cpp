#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define MOD 1000000007
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl;
#define SlimHady ios::sync_with_stdio(false); cin.tie(0);
#define INF 1e18


void solve() {
   int n ; cin >> n;
    vi h(n);
    vi dp( n , INT_MAX);
    for (auto &i : h) cin >> i;
    dp[0] = 0;
    for (int i = 1; i < n ; i ++) {
        if (i - 1 >= 0) { // one jump
            dp[i] = min(dp[i] , dp[i - 1] + abs(h[i] - h[i-1]) );
        }
        if ( i - 2 >= 0 ) { // two jump
            dp[i] = min(dp[i] , dp[i - 2] + abs(h[i] - h[i-2]) );
        }
    }
    cout << dp[n-1] << endl;
}

int main() {
    SlimHady

    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
