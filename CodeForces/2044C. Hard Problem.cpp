/**
 *    author:  Hady17
 *
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll m, a, b, c;
    cin >> m >> a >> b >> c;

    ll row1 = min(a, m);
    ll row2 = min(b, m);

    ll r = 2 * m - row1 - row2;

    ll n = min(c, r);

    ll total = row1 + row2 + n;
    cout << total << '\n';
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
