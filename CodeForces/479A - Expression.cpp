#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define sz(x)(x).size()
#define ll long long

void solve() {
    int a , b ,c ;
    cin >> a >> b >> c ;
    int mx = 0; 
    // a+b*c / a*(b+c) / a*b*c / (a+b)*c
    mx = max(max( (a+b*c) , (a*(b+c)) ) , max( (a*b*c) , ((a+b)*c) ));
    mx = max(mx , a+b+c);
    cout << mx ;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
