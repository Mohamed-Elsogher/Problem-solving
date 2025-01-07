// Using Binary search 
#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "Yes " 
#define no cout << "No" 
#define sz(x) (x).size()
#define ll long long

int binary_search_ascending(const vector<int>& arr, int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int binary_search_descending(const vector<int>& arr, int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int solve() {
    int n, q; 
    cin >> n >> q;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int peak_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            peak_index = i;
        } else {
            break;
        }
    }

    for (int i = 0; i < q; i++) {
        int a; 
        cin >> a;

        int res = binary_search_ascending(arr, 0, peak_index, a);
        
        if (res == -1) {
            res = binary_search_descending(arr, peak_index + 1, n - 1, a);
        }
        
        if (res != -1) {
            cout << "Yes " << res + 1 << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
