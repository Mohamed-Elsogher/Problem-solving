/**
 *    author:  Hady17
 *
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define arr array
void solve() {
    int left0, left1, right2, right3;
    cin >> left0 >> left1 >> right2 >> right3;
    vector<pair<int, int>>suneet = {{left0, left1}, {left1, left0}};
    vector<pair<int, int>> slavic ={{right2, right3}, {right3, right2}};
    int win = 0;
    for (auto s : suneet) {
        for (auto t : slavic) {
            int swin = 0;
            if (s.first > t.first) swin++;
            if (s.first < t.first) swin--; 
            if (s.second > t.second) swin++;
            if (s.second < t.second) swin--;
            if (swin > 0) win++;
        }
    }
    cout << win << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
