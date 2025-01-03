#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (x).size()
#define ll long long

int solve() {
    int s1 , s2 ,s3 ,s4 ;
    cin >> s1 >> s2 >> s3 >> s4 ;
    vector<int> arr ;
    int ans = 0;
    arr.pb(s1); arr.pb(s2) ; arr.pb(s3) ; arr.pb(s4);
    sort(arr.begin() , arr.end());
    for(int i = 1 ; i < 4 ; i++){
        if(arr[i] == arr[i-1] ){
            ans++;
        }
    }
    return ans  ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int tt ;
     //while(tt--){
         cout << solve();
     //}

    return 0;
}
