/**
 *    
 *    اللهم صلي وسلم على سيدنا محمد 
 *    سبحان الله وبحمده سبحان الله العظيم
 *    Hoping to be the best version of myself
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin() , v.end()
#define Hady ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define INF 1e9
#define pb push_back
#define debug(x) cout << (#x) << " = " << x << endl

int main() {
    Hady;
    int tt = 1; //cin >> tt;
    while (tt--) {
    ll n , m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll &i : a) cin >> i;
    for (ll &i : b) cin >> i;
    sort(all(a));  
    for (ll bj : b) {
        ll pos = upper_bound(all(a), bj) - a.begin();
        cout << pos << " ";
    }
    cout << endl;
    }
    return 0;
}
