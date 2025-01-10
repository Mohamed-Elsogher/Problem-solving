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
    int n;
    cin >> n;
    vector < int > arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int mx_index = max_element(all(arr)) - arr.begin();

    int mn_index = n - 1;
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] == * min_element(all(arr))) {
            mn_index = i;
            break;
        }
    }

    int first = mx_index;
    int last = (n - 1) - mn_index;

    if (mx_index == 0) {
        first = 0;
    }
    if (mn_index == n - 1) {
        last = 0;
    }

    if (mx_index > mn_index) {
        cout << (first + last - 1) << endl;
    } else {
        cout << (first + last) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
