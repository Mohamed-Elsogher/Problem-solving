#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (int)(x).size()
#define ll long long
#define Hady ios_base::sync_with_stdio(false); cin.tie(NULL);
#define INF 1000000000

void solve() {  
    string s;
    cin >> s;
    int size = sz(s);
    int ans = 0;
    for (int i = 0; i < size - 2; ++i) {
        if (s[i] != 'A') continue; 
        for (int j = i + 1; j < size - 1; ++j) {
            if (s[j] != 'B') continue; 
            int x = j + (j - i); 
            if (x < size && s[x] == 'C') { 
                ans++;
            }
        }
    }
    cout << ans; 
}

int main() {
    Hady
    solve();
    return 0;    
}
