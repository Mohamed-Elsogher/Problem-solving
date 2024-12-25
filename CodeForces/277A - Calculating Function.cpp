#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (x).size()
#define ll long long

void solve() {
    ll n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 ; 
    } else {
        cout << -(n / 2 + 1) ;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    // int tt ; 
    // cin >> tt;
    // while(tt--){
    //     solve();
    // }
    return 0;
}
