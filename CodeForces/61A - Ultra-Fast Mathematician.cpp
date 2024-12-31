#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (x).size()
#define ll long long

void solve(){

    string a , b;
    cin >> a >> b;
    vector<int> ans;
    for(int i = 0 ; i< a.size() ; i++){
        if(a[i]==b[i]){
            ans.pb(0);
        }
        else ans.pb(1);
    }
    for(int i : ans){
        cout << i ;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
