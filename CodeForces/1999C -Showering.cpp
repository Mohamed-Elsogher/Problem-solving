/**
 *    author:  Hady17
 *
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define arr array
void solve() {
    int n , s , m ;
    cin >> n >> s >> m ;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++){cin >> v[i].first >> v[i].second;}
    if(v[0].first >= s){cout << "YES" << "\n" ; return;}
    sort(v.begin(), v.end());
    for(int i =1;i<n;i++){
        if((v[i].first - v[i-1].second) >=s){cout << "YES" << "\n"; return;}
    }
        if (m - v[n - 1].second >= s) {
        cout << "YES"<<"\n";
        return;
    }

    cout << "NO" << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
