#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES"
#define no cout << "NO"
#define sz(x)(x).size()
#define ll long long

int solve() {
    
    int n ; cin >> n ;
    set<int>s;
    for(int i = 0 ; i < n ; ++i) {
        int x;cin >> x;
        s.insert(x);
    }
    
    return s.size();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   cout <<  solve();

    return 0;
}
