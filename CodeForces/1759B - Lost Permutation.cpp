#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n";
#define ll long long
#define Hady  ios::sync_with_stdio(false);cin.tie(nullptr);


int main() {
 
    Hady
    int tt ; cin >> tt;
    while(tt--){
         int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int sumA = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sumA += a[i];
        }
        s += sumA;
        int sm = 0, cnt = 0;
        for (int i = 1; sm < s; i++) {
            sm += i;
            cnt = i;
        }
        if (sm == s && *max_element(a.begin(), a.end()) <= cnt && cnt >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
