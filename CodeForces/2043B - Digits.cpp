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
    int n ; int d ; 
    cin >> n ; cin >> d; 
    vector<int>ans;
    ans.pb(1);
    if(d%3 == 0 || n>= 3){
        ans.pb(3);
    }
    if(d%5==0){
        ans.pb(5);
    }
    if(d %7 ==0 || n >= 3){
        ans.pb(7);
    }
    if(d%9==0 || n>=6 || (n>=3 and d%3==0)){
        ans.pb(9);
    }

    for(auto i : ans){
        cout << i  << ' ';
    }
    cout << endl ;
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
