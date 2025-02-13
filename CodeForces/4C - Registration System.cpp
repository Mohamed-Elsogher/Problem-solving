#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(x) (int)(x).size()
#define ll long long
#define Hady ios_base::sync_with_stdio(false); cin.tie(NULL);
#define INF 1000000000

void solve()
{  
    int n ; cin >> n;
    vector<string>arr(n);
    unordered_map<string,int> freq ;
    for(int i = 0 ; i < n ;++i){
        cin >>arr[i];
        if(freq[arr[i]] > 0){
            cout << arr[i] << freq[arr[i]] << endl;
        }
        else cout << "OK" << endl;
        freq[arr[i]]++;
    }


}
int main() {
    Hady
    // int tt ; 
    // cin >> tt;
    // while(tt--){
       solve();
//}


   return 0;    
}
