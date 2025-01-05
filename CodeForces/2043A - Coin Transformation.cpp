#include <bits/stdc++.h>
using namespace std;
 
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "Yes " 
#define no cout << "No" 
#define sz(x) (x).size()
#define ll long long

int solve() {
    ll n ; cin >> n ;
    ll coins = 1 ;
    while(n > 3){
      n /= 4;
      coins *= 2;
    }
    cout << coins << endl;
    return 0 ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ; 
    cin>> tt;
    while(tt--){
    solve();
    }
    return 0;
}
