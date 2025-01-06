#include <bits/stdc++.h>
using namespace std;
 
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "Yes " 
#define no cout << "No" 
#define sz(x) (x).size()
#define ll long long

void solve(){

   int n ; cin >> n ;
   vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(all(arr));
    for(int i : arr){
        cout << i << ' ';
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tt ; 
    // cin>> tt;
    // while(tt--){
    solve();
    // }
    return 0;
}
