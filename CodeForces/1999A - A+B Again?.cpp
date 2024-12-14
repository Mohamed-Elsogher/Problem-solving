/**
 *    author:  Hady17
 *
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array

void solve()
{
    int nu;
    cin >> nu;
    nu = abs(nu); 
    int res = 0;
    while (nu != 0)
    {
        int n = nu % 10; 
        res += n;   
        nu /= 10;        
    }
    cout << res << '\n'; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        solve();
    }

    return 0;
}
