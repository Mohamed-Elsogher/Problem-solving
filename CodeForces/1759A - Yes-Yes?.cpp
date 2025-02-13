#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n";
#define ll long long
#define Hady  ios::sync_with_stdio(false);cin.tie(nullptr);


int main() {
    string full = "";
    for (int i = 0; i < 18; i++) {
        full += "Yes";
    }
    Hady
    int tt ; cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        if (full.find(s) != string::npos) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
        

    return 0;
}
