#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define sz(x) (x).size()



void solve() {
    int n ; cin >> n; 
     string isHard = "EASY"; 
    for(int i = 0 ; i < n ; i++){
        int a ; cin >> a ;
        if(a == 1){
            isHard = "HARD";
        }
    }
    cout << isHard ;

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
