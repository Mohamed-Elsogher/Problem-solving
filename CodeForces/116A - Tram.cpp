#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back

void solve() {

   int n ; cin >> n ; 
   int out ; int in ;
   int sum = 0; int ans = 0; 

   while(n--){
    cin >> out >> in;
    sum += in - out ; // sum =  4
    ans = max(ans , sum); //ans = 6 
   }
   cout << ans;
}

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
