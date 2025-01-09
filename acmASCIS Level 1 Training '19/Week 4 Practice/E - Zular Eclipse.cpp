#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" 
#define no cout << "NO" 
#define sz(x) (x).size()
#define ll long long

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(all(arr));
    vector<ll> prefix(n + 1, 0);
    for(int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    int q; cin >> q;
    while(q--) {
        int p; cin >> p;
        int idx = upper_bound(all(arr), p) - arr.begin();
        if(idx == 0) {
            cout << -1 << endl;
        } else {
            cout << idx << " " << prefix[idx] << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
