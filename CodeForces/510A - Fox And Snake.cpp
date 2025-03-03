/**
 *    author:  Hady17
 *    اللهم صلي وسلم على سيدنا محمد 
 *    سبحان الله وبحمده سبحان الله العظيم
 *    Hoping to be the best version of myself
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#define Hady ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"



int main() {
    Hady
    int tt = 1;// cin >> tt;
    while (tt--) {
        int n , m ;
        cin >> n >>m ;
        for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			bool haveSnake = false;
			if(i % 2 == 1) haveSnake = true;
			else
			{
				if(i % 4 == 2) haveSnake = (j == m);
				if(i % 4 == 0) haveSnake = (j == 1);
			}
			cout << (haveSnake ? "#" : ".");
		}
		    cout << endl;
	    }
    }
    return 0;
}
