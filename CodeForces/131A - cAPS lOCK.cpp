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
    int tt = 1; // cin >> tt;

    while (tt--) {
        string s; cin >> s;
        string upper = s;
        transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
        if (s == upper) {  
            transform(upper.begin(), upper.end(), upper.begin(), ::tolower);
            cout << upper;
        } 
        else {
            string temp = s;
            temp[0] = tolower(temp[0]); 
            transform(temp.begin() + 1, temp.end(), temp.begin() + 1, ::toupper);
            if (s == temp) {
                temp[0] = toupper(temp[0]); 
                transform(temp.begin() + 1, temp.end(), temp.begin() + 1, ::tolower);
                cout << temp ;
            } 
            else {
                cout << s ;
            }
        }
    } 
    return 0;
}
