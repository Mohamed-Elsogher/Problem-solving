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
    int n; 
    cin >> n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }
    sort(all(arr));
    int mx =0 ;
    for(int i = 0 ; i < n ; i+=2){
        if(max(mx , arr[i]) != max(mx, arr[i+1])) {
            no 
            return;
        }
        mx = max(mx, arr[i]) + 1;
    }
    yes
}

int main() {
    Hady
    int tt ; 
    cin >> tt;
    while(tt--){
       solve();
    }


   return 0;    
}
