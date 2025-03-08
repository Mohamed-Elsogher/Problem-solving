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
    int tt = 1; cin >> tt;
    while (tt--) {
       int n ; cin >> n;
       vector<int> v(n);
       for( int &i : v) cin >> i;
       int left =0 ;int right = n-1;
    //    vector<int>ans(n);
       while(left <= right){
        if( right == left){
            cout << v[left];
        }
        else cout << v[left] << " " << v[right] << " ";
        left++ ; right--;
       }
       cout << endl;
       
	}
   
    return 0;
}
