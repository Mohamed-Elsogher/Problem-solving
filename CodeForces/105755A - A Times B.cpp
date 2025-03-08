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
    int tt = 1; cin >> tt;
    while (tt--) {
      ll n , m , a, b; 
      cin >> n >> m >> a >> b;
      ll ans = n * m; 
      while( n < a || m < b){
        if( m == b || (n<a && n < m)){
          n++;
        }
        else m ++;
        ans += n * m;
      }
      cout << ans << endl;
    }
    return 0;
}
