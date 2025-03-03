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
  string s1 ,s2;
  cin >> s1 >> s2 ;
  if(s1 == "fine" && s2 == "fine"){
        cout << 4 ;
        return ;
  }
  if(s1 == "sick" && s2 == "sick"){
        cout << 1 ;
        return;
  }
  if(s1 == "sick" && s2 == "fine"){
        cout << 2;
        return;
  }
  if(s1 == "fine" && s2 == "sick"){
        cout << 3;
        return ;
  }
}

int main() {
    Hady
    solve();
    return 0;    
}
