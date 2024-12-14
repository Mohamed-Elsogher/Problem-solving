/**
 *    author:  Hady17
 *    
**/
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#define ll  long long
#define arr  array

void solve()
{
     int n, x;
    cin >> n >> x;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (x >= int(s[i].size())) {
        x -= int(s[i].size());
        ans += 1;
      } else {
        break;
      }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt ;
    while (tt--) {
        solve();
    }

    return 0;
}

