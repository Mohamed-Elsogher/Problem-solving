#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES"
#define no cout << "NO"
#define sz(x) (x).size()
#define ll long long
#define Hady ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int x, y ; cin >> x >> y;
     cout << ((y == x + 1) || ((x + 1 > y) && ((x + 1 - y) % 9 == 0)) ? "YES" : "NO") << endl;
    
}

int main() {
    Hady
    int tt =1 ; cin >> tt;
    while(tt--){
    solve();
    }
    return 0;
}
