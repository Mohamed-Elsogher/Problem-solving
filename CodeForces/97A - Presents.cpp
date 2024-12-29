#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (x).size()
#define ll long long


int solve(){

    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        q[p[i] - 1] = i + 1; 
    }
    for (int i = 0; i < n; i++) {
        cout << q[i] << " ";
    }
    return 0;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0 ;

}
