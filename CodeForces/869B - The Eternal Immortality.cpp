#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES"
#define no cout << "NO"
#define sz(x)(x).size()
#define ll long long

void solve() {
    ll a, b;
    cin >> a >> b;
    if(b-a >= 10){
        cout << 0 ;
        return;
    }
    ll ans = 1;
    for (ll i = a + 1; i <= b; ++i) {
        ll lastDigit = i % 10;
        ans *= lastDigit;
    }
    cout << ans % 10;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
