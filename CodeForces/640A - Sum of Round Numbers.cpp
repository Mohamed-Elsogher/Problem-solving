#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (x).size()
#define ll long long

void solve() {
    int t ; cin >> t;

    while(t--){
        int k ; cin>>k ;
        int m = 1;
        vector<int>ans;
        while( k > 0 ){
            int digit = k%10;
            if(digit > 0 ){
                ans.pb(digit*m);
            }
            k = k/10 ;
            m = m *10;
        }
        cout << sz(ans) << endl;
        for(int i : ans ){
            cout << i << " " ;
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int tt ;
     //while(tt--){
         solve();
     //}

    return 0;
}
