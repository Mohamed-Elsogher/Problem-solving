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
    int n; cin >> n; 
    vector<int> arr(n);
    for(int &i : arr) cin >> i;
    sort(arr.begin(), arr.end());
    int q; cin >> q;
    while (q--) {
        int a; cin >> a;
        int start = 0, end = n - 1;
        int ans = 0;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] <= a) {
                ans = mid + 1; 
                start = mid + 1; 
            } else {
                end = mid - 1; 
            }
        }
        cout << ans << endl;
    }

    return 0;
}
