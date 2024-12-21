#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define sz(x) (x).size()

bool must_bend( int a , int k){
    return a > k;  // return true
}

void solve() {
    int n ; int h ; 
    cin >> n >> h ;
    vector<int>arr;
    int count = 0 ;

    for(int i =0 ; i< n ; i++){
        int a ;
        cin >> a; 
        arr.pb(a);
    }

    for(int i : arr){
        if(must_bend(i , h)){
            count +=2;
        }
        else count ++; 
    }
    cout << count ;

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
