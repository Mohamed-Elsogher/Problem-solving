#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define sz(x) (int)(x).size()
#define ll long long
#define speed_up ios_base::sync_with_stdio(false); cin.tie(NULL);

ll w, h, n ;
bool good(ll x){
    return (x/w) * (x/h) >= n; 
}
void solve()
{
    
    cin >> w >> h >> n;

    ll l = 0 ; // this is bad number
    ll r = 1; // this gooooood

    while(!good(r)) r*=2;

    while( r > l + 1 ){
        ll mid = ( l + r ) / 2;
        if(good(mid)){
            r = mid;
        }
        else
            l = mid;
    }
    cout << r << endl;
}
int main() {
    speed_up;
    // int tt= 1; cin >> tt;
    // while(tt--){
    solve();
    // }
   return 0;    
}
