/**
 *    
 *    اللهم صلي وسلم على سيدنا محمد 
 *    سبحان الله وبحمده سبحان الله العظيم
 *    Hoping to be the best version of myself
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin() , v.end()
#define Hady ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define INF 1e9
#define pb push_back
#define debug(x) cout << (#x) << " = " << x << endl

vector<int> memo(4009 , -1);
int main() {
    Hady;
    int tt = 1; //cin >> tt;
    while (tt--) {
      int n; string s;
      cin >> n >> s;
      int mx = 0; 
      string dummy , maxdummy;
      for(int i = 0 ; i < n-1; ++i){
        int count =0 ;dummy= s.substr(i , 2);
        for(int j = 0 ; j < n-1; ++j){
          if(s.substr(j,2) == dummy){
            count ++;
          }
        }
        if(count > mx){
          mx = count ;
          maxdummy = dummy;
        }
      }
      cout << maxdummy;
    }
    return 0;
}
