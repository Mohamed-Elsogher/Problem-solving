#include <iostream>
#include <string>
using namespace std;


void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    int l = 0; 
    int a = 0; 

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            l++;
        } else {
            l = 0;
        }

        if (l == m) {
            a++;
            i = i + k - 1; 
            l = 0; 
        }
    }

    cout << a << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve(); 
    }
    return 0;
}
