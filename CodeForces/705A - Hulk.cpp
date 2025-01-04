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
    int n ; cin >> n;
    ostringstream str;
    for(int i = 1 ; i <= n ; i++){
        if(i%2!=0){str << "I hate"; }
        else str << "I love";
        if(i != n){
            str << " that ";
        }
    }
    str << " it";
    cout << str.str() ;
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
