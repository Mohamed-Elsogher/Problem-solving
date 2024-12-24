#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define sz(x) (x).size()

bool isValid(int a , int b ) {
    if ( b - a >= 2 )
        {
        return true ;
    }
    return false ;
}

void solve() {
     int n;
    cin >> n;

    stack<string> st;
    int groups = 0;

    for (int i = 0; i < n; i++) {
        string magnet;
        cin >> magnet;

        if (st.empty() || st.top() != magnet) {
            groups++;
            st.push(magnet);
        }
    }

    cout << groups ;

};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // int tt;
    // cin >> tt;
    // while (tt--) {
    //     solve();
    // }
    return 0;
}
