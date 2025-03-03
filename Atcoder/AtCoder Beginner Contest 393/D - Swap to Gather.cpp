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
    int L; cin >> L;
    string S; cin >> S;
    stack<int> st;
    for (int i = 0; i < L; i++){
        if(S[i] == '1')
            st.push(i);
    }
    vector<int> arr;
    while(!st.empty()){
        arr.pb(st.top());
        st.pop();
    }
    reverse(all(arr));
    int size = sz(arr);
    if(size <= 1){
        cout << 0;
        return;
    }
    int mid = size / 2;
    ll ans = 0;
    int start = arr[mid] - mid;
    for (int i = 0; i < size; i++){
        ans += abs(arr[i] - (start + i));
    }
    cout << ans;
}

int main() {
    Hady
    solve();
    return 0;
}
