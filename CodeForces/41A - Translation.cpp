#include <iostream>
#include <string>
using namespace std;
#include <algorithm>

int main() {

    string s ;
    string t ;

    cin >> s;
    cin >> t;

    reverse(t.begin() , t.end());
    if(t==s){
        cout << "YES";
    }
    else cout <<"NO";

    return 0;
}
