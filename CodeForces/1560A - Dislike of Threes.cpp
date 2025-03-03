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



int main() {
    Hady
    int tt = 1; cin >> tt;

    while (tt--) {
        int n ; cin >> n ;
        for(int i = 1 ; ; ++i){
            if(i%3 == 0 || i%10 == 3){
                continue;
            }
            if(--n == 0){
                cout << i << endl;
                break;
            }
        }
    } 
    return 0;
}
