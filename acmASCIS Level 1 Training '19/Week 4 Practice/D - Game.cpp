#include <bits/stdc++.h>
using namespace std;
 
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" 
#define no cout << "NO" 
#define sz(x) (x).size()
#define ll long long

void solve(){
  int n , q ; cin >> n >> q ;
  vector<int> v(n);
  for(int i = 0 ; i < n ;++ i){
    cin >> v[i];
  }
    vector<int> ans;
       while(q--){
        int target ; cin >> target ;
        auto nu = upper_bound(all(v) , target);
        if(nu != v.end()){
            cout << *nu << endl ;
        }
        else cout << -1 << endl ;
            }
        }
        
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
      solve();
    
    return 0;
}
