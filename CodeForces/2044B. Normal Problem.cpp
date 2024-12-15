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
    string a;
    cin >> a;

    reverse(a.begin(), a.end());

    for (char &c : a)
    {
        if (c == 'p') c = 'q';
        else c = 'p';
    }

    cout << a << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;

    while (tt--)
    {
        solve();
    }

    return 0;
}
