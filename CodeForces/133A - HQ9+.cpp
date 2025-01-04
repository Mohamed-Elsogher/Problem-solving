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
     string str ; cin >> str ;
     if (str.find('H') != string::npos || str.find('Q') != string::npos || str.find('9') != string::npos){
        cout << "YES";}
     else cout << "NO";

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
