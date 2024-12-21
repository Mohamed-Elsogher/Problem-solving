#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define sz(x) (x).size()

bool isDistinct(int n){
    string str = to_string(n);
    set<char>ch (all(str));
    return ch.size() == 4 ;
}

void solve() {
    int n ; 
    cin >> n ; 
    n++;
    while(!isDistinct(n)){
        n++;
    }
    cout <<  n;
  
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
