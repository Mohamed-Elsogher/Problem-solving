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
     vector<int>ans;
     int count = 0 ;
     for(int i = 0 ; i<t;i++){
        int a , b ; cin >> a >> b ;
        if(a%b == 0){ans.pb(0);}
        else{int res =b-(a%b); ans.pb(res);}
     }
     for(int i : ans){
        cout << i << endl ;
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
