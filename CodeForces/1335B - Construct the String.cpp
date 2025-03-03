#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n";
#define yes cout << "YES";
#define no cout << "NO";
#define sz(x)(x).size()
#define ll long long
#define Hady  ios::sync_with_stdio(false);cin.tie(nullptr);

void solve() {
    int n , a, b; 
    cin >> n >> a >> b;
    string ans = "";
    for(int i = 0 ; i< n ; i++){
        ans += char('a'+i%b);
    }
    cout << ans << endl;

}
int main() {

    Hady
    int tt = 1; cin >> tt;
    while(tt--){
    solve();
    }

    return 0;
}
