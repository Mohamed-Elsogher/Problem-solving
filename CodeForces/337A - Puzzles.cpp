/**
 *    author:  Hady17
 *    اللهم صلي وسلم على سيدنا محمد 
 *    سبحان الله وبحمده سبحان الله العظيم
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
#define INF 1e9

int main() {
    Hady
    int tt = 1;// cin >> tt;
    while (tt--) {
	    int n , m ;
        cin >> n >> m;
        vector<int> v(m);
        for(int &i : v) cin >> i;
        int ans = INF;
        sort(v.begin(), v.end());
        for (int i = 0; i + n - 1 < m; ++i) {
        ans = min(ans, v[i + n - 1] - v[i]);
    }
        cout << abs(ans);
	}
    
    return 0;
}
