#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (x).size()
#define ll long long

void solve(){
    int n , sum =0 ; cin >>n ; 
    for(int i =0 ; i < n ;  i++){
       int a ; cin>> a;
       sum +=a;   
    }
    double k = double(sum) / n ;
    cout << fixed << setprecision(12) << k ;
}
   
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0 ;

}
