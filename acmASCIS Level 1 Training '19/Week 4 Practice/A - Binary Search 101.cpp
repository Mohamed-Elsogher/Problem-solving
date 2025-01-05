#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (x).size()
#define ll long long

int solve() {
     ll a, b, k;
    cin >> a >> b >> k;

    int steps = 0;
    ll left = a, right = b;

    while (left <= right) {
        steps++;
        ll mid = left + (right - left) / 2; 
        if (mid == k) {
            break;
        } else if (mid > k) {
            right = mid - 1; 
        } else {
            left = mid + 1; 
        }
    }
    return steps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << solve();
    return 0;
}
