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

vector<int> memo(4009 , -1);
int main() {
    Hady
    int tt = 1;// cin >> tt;
    while (tt--) {
       int n , a , b ,c ;
       cin >> n >>  a >> b >> c ;
       memo[0] = 0; 
       for (int i = 0; i <= n; i++) {
           if (memo[i] == -1) continue; 
           if (i + a <= n) memo[i+ a] = max(memo[i+a], memo[i] + 1);
           if (i + b <= n) memo[i +b] = max(memo[i +b], memo[i] + 1);
           if (i + c <= n) memo[i + c] = max(memo[i+ c], memo[i] + 1);
       }
       cout << memo[n];
       
	}
   
    return 0;
}
