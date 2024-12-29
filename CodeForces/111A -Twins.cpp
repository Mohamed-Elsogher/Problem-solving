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

    int n ; cin >> n;
    int sum =0 ;
    int Mycoins = 0 ; int CountCoins =0 ;
    vector<int>coins(n);

     for (int i = 0; i < n; i++) {
        cin >> coins[i];
        sum += coins[i];
    }
     sort(coins.rbegin(), coins.rend());
    for(int i = 0 ; i < n ; i++){
         Mycoins += coins[i];
         CountCoins++; 
         if(Mycoins > sum - Mycoins){
            cout << CountCoins;
            return;
         }             
    }

}
   
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0 ;

}
