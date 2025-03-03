/**
 *    author:  Hady17
 *    اللهم صلي وسلم على سيدنا محمد 
 *    سبحان الله بحمده سبحان الله العظيم
 *    Hoping to be the best version of myself
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#define Hady ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

 
int main() {
    Hady
    ll tt=1; cin >> tt;
    while (tt--) {
        ll n ; cin >> n ; 
        vector<int> arr (n);
        for(auto &i : arr) cin >> i;
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        sort(arr.begin() , arr.end());
        ll ans = 0;
        for(int i = 1 ; i < n ; ++i){
            ans += arr[i] - arr[0];
        }
        cout << ans << endl;
    }
    return 0;
}
