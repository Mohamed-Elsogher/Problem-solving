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
    int n ,q ; 
    map<int,int> mp;
    cin >> n >> q ;
    for(int i = 1 ; i<= n ; ++i){
        int e ; cin >> e ;
        mp[e] = i ; 
    }
    while(q--){
        int target ; cin >> target;
        if(mp.find(target) != mp.end()){
            cout << "Yes " << mp[target] << endl;
        }
        else cout << "No" << endl;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tt ; 
     //cin>> tt;
    //  while(tt--){
      solve();
//    }
    return 0;
}
