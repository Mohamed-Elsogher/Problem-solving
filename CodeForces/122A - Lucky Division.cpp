#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define sz(x) (x).size()

bool contains4and7(int n) {
    bool has4 = false, has7 = false , hasany = true ;

    while (n > 0) {
        int digit = n % 10;
        if (digit == 4) {
            has4 = true;
        }
        else if (digit == 7) {
            has7 = true;
        }
         else if(digit != 7 || digit !=4 ){
            hasany = false;
        }
        n /= 10;
       }
    return has4 && has7 && hasany;
}
bool isLuckey(int n ){
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n%77 ==0 || n%44 ==0  ){
        return true ;
    }
    return false ;
}

void solve() {
    int number;
    cin >> number ;
    if(isLuckey(number) || contains4and7(number) ){
        cout << "YES";
    }
   else cout << "NO";
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // int tt;
    // cin >> tt;
    // while (tt--) {
    //     solve();
    // }
    return 0;
}
