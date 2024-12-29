#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (x).size()
#define ll long long

/*void solve(){

for (int i = 0; i < n; ++i) {
        if (i < (n + 1) / 2) {
            nu[i] = 2 * i + 1; // Odd numbers
        } else {
            nu[i] = 2 * (i - (n + 1) / 2) + 2; // Even numbers
        }
    }
*/
void solve(){

    ll n, k; 
    cin >> n >> k;

    ll odd_count = (n + 1) / 2;
    if (k <= odd_count) {
        cout << 2 * k - 1 ; 
    } else {
        k -= odd_count; 
        cout << 2 * k ; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
