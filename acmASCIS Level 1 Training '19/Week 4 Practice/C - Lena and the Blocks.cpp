#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" 
#define no cout << "NO" 
#define sz(x) (x).size()
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> towers(n);

    for (int i = 0; i < n; ++i) {
        cin >> towers[i];
    }

    int min_height = *min_element(all(towers));
    int max_height = *max_element(all(towers));

    vector<int> short_indices, tall_indices;
    for (int i = 0; i < n; ++i) {
        if (towers[i] == min_height) {
            short_indices.push_back(i);
        }
        if (towers[i] == max_height) {
            tall_indices.push_back(i);
        }
    }

    int min_distance = INT_MAX;
    for (int tall_idx : tall_indices) {
        for (int short_idx : short_indices) {
            int distance = abs(tall_idx - short_idx);
            if (distance < min_distance) {
                min_distance = distance;
            }
        }
    }

    cout << min_distance << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
