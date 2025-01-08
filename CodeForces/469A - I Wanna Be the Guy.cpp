#include <bits/stdc++.h>
using namespace std;

int main() {
    
        int n;
        cin >> n;
        
        set<int> numbers;
        int p;
        cin >> p;
        while (p--) {
            int a;
            cin >> a;
            numbers.insert(a);
        }

        int q;
        cin >> q;
        while (q--) {
            int b;
            cin >> b;
            numbers.insert(b);
        }

        if (numbers.size() == n) {
            cout << "I become the guy." ;
        } else {
            cout << "Oh, my keyboard!" ;
        }
    

    return 0;
}
